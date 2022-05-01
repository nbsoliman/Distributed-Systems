import java.io.IOException;
import java.util.StringTokenizer;

import org.apache.hadoop.conf.Configuration;
import org.apache.hadoop.fs.Path;
import org.apache.hadoop.io.IntWritable;
import org.apache.hadoop.io.Text;
import org.apache.hadoop.mapreduce.Job;
import org.apache.hadoop.mapreduce.Mapper;
import org.apache.hadoop.mapreduce.Reducer;
import org.apache.hadoop.mapreduce.lib.input.FileInputFormat;
import org.apache.hadoop.mapreduce.lib.output.FileOutputFormat;

public class SleepTime {

  public static class TokenizerMapper
       extends Mapper<Object, Text, Text, IntWritable>{

    public void map(Object key, Text value, Context context
                    ) throws IOException, InterruptedException {

    StringTokenizer itr = new StringTokenizer(value.toString());
    String firstLine = itr.nextToken();
    if (firstLine.charAt(0) != 'T') {
        itr.nextToken();
        itr.nextToken();
    }
    itr.nextToken();
    String timeval = itr.nextToken();
    itr.nextToken();
    itr.nextToken();
    itr.nextToken();
    while (itr.hasMoreTokens()) {
        String tweetWord = itr.nextToken();
        if (tweetWord.equals("sleep")) {
            value.set(timeval.substring(0,2));
            context.write(value, new IntWritable(1));
            break;
        }
    }
    }
  }

  public static class IntSumReducer
       extends Reducer<Text,IntWritable,Text,IntWritable> {
    private IntWritable result = new IntWritable();

    public void reduce(Text key, Iterable<IntWritable> values,
                       Context context
                       ) throws IOException, InterruptedException {
      int sum = 0;
      for (IntWritable val : values) {
        sum += val.get();
      }
      result.set(sum);
      context.write(key, result);
    }
  }

  public static void main(String[] args) throws Exception {
    Configuration conf = new Configuration();
    conf.set("textinputformat.record.delimiter", "\n\n");
    Job job = Job.getInstance(conf, "wordcount");
    job.setJarByClass(SleepTime.class);
    job.setMapperClass(TokenizerMapper.class);
    job.setCombinerClass(IntSumReducer.class);
    job.setReducerClass(IntSumReducer.class);
    job.setOutputKeyClass(Text.class);
    job.setOutputValueClass(IntWritable.class);
    FileInputFormat.addInputPath(job, new Path(args[0]));
    FileOutputFormat.setOutputPath(job, new Path(args[1]));
    System.exit(job.waitForCompletion(true) ? 0 : 1);
  }
}
