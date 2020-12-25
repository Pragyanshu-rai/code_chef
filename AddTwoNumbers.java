import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.io.IOException;
public class AddTwoNumbers
{
    public static BufferedReader in = new BufferedReader(new InputStreamReader(System.in)); 
    public static String[] string_array;
    public static void main(String []args) throws IOException
    {
        int repeat,first_number,second_number;
        repeat=Integer.parseInt(in.readLine());
        for(int cycle=0;cycle<repeat;cycle++)
        {
            string_array=in.readLine().split(" ");
            System.out.println(Integer.parseInt(string_array[0])+Integer.parseInt(string_array[1]));
        }
    }
}
