import java.io.IOException;
import java.io.BufferedReader;
import java.io.InputStreamReader;
public class TurboSort
{
    public static BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
    public static void main(String []args)
    {
        int size;
        int array[];
        size=Integer.parseInt(in.readLine());
        array=new int[size];
        for(int index=0;index<size;index++)
            array[index]=Integer.parseInt(in.readLine());
        for(int index=0;index<size-1;index++)
            for(int pointer=index+1;pointer<size;pointer++)
                if(array[index]>array[pointer])
                {
                    int temp=array[index];
                    array[index]=array[pointer];
                    array[pointer]=temp;   
                }
        for(int index=0;index<size;index++)
            System.out.println(array[index]);
    }
}
