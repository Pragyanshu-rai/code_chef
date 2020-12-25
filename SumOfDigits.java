import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.io.IOException;
public class SumOfDigits
{
    public static BufferedReader in = new BufferedReader(new InputStreamReader(System.in));   
    public static void main(String []args) throws IOException
    {
        int repeat,number,sum;
        repeat = Integer.parseInt(in.readLine());
        while(repeat>0)
        {
            sum=0;
            number=Integer.parseInt(in.readLine());
            while(number>0)
            {
                sum+=number%10;
                number/=10;    
            }
            System.out.println(sum);
            repeat--;
        }
    }
}
