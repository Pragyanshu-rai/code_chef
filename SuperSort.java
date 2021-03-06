import java.io.IOException;
import java.io.BufferedReader;
import java.io.InputStreamReader;
public class SuperSort
{
    public static BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
    public static String[] input;
    public static int[] array;
    public static void superSort()
    {
        if(array.length<=15)
        {
            System.out.print("Bubble sort used : ");
            bubbleSort();
        }
        else
        {
            System.out.print("Merge sort used : ");
            mergeSort(0,array.length-1);
        }
    }
    public static void bubbleSort()
    {
        int size=array.length;
        for(int outer_pointer=0;outer_pointer<size-1;outer_pointer++)
        {
            for(int inner_pointer=outer_pointer;inner_pointer<size;inner_pointer++)
            {
                if(array[outer_pointer]>array[inner_pointer])
                {
                    array[outer_pointer]=array[outer_pointer]*array[inner_pointer];
                    array[inner_pointer]=array[outer_pointer]/array[inner_pointer];
                    array[outer_pointer]=array[outer_pointer]/array[inner_pointer];
                }    
            }    
        }
    }
    public static void quickSort(int low, int high)
    {
        if(low<high)
        {
            int new_high=part(low,high);
            quickSort(low,new_high);
            quickSort(new_high+1,high);
        }
    }
    public static int part(int low, int high)
    {
        int pivot=(low+high)/2;
        while(array[low]<=array[pivot])
            low++;
        while(array[high]>=array[pivot])
            high--;
        if(low<high)
        {
            int temp=array[low];
            array[low]=array[high];
            array[high]=temp;    
        }
        else
        {
            int temp=array[high];
            array[high]=array[pivot];
            array[pivot]=temp;
        }
        return high;
    }
    public static void mergeSort(int low, int high)
    {
         if(low<high)
        {
            int mid = (low+high)/2;
            mergeSort(low,mid);
            mergeSort(mid+1,high);
            merge(low,mid,high);    
        }
    }
    public static void merge(int low, int mid, int high)
    {
        int i=low,j=mid+1,k=low;
        int[] temp = new int[high+1];
        while(i<=mid && j<=high)
        {
            if(array[i]>array[j])
                temp[k++]=array[j++];
            else
                temp[k++]=array[i++];
        }
        for(;i<=mid;)
            temp[k++]=array[i++];
        for(;j<=high;)
            temp[k++]=array[j++];
        for(i=low;i<=high;i++)
            array[i]=temp[i];
    } 
    public static void main(String []args) throws IOException
    {
        int size,index=0;
        input = in.readLine().split(" ");
        size = input.length;
        array = new int[size];
        for(String number : input)
            array[index++] = Integer.parseInt(number);
        superSort();
        for(Integer number : array)
            System.out.print(number+" ");
        System.out.println();
    }
}
