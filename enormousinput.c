#include<stdio.h>
void main()
{
    int numbers,number,key,result=0;
    scanf("%d %d",&numbers,&key);
    for(;numbers>0;numbers--)
    {
        scanf("%d",&number);
        if(number % key == 0)
            result++;
    }
    printf("%d\n",result);
}
