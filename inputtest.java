public class inputtest
{
    public static void main(String []args)
    {
        String test_string = "Hey Baby How Are you !!!!!";
        String[] string_array = test_string.split(" ");
        for(String str : string_array)
        {
            System.out.println(str+" ");        
        }
        System.out.println();
    }
}
