#include<stdio.h>
int main()
{
    int testcase,size,maxquery,index,carry,days,over;
    scanf("%d",&testcase);
    for(;testcase>0;testcase--)
    {
        scanf("%d %d",&size,&maxquery);
        int query[size];
        for(index=0;index<size;index++)
            scanf("%d",&query[index]);
        carry=0;
        for(index=0;index<size;index++)
        {
            query[index]+=carry;
            if(query[index]<maxquery)
            {
                printf("%d\n",index+1);
                break;            
            }
            else
                carry=query[index]-maxquery;
        }
        if(carry>maxquery)
        {
            carry=carry/maxquery;
            printf("%d\n",carry+size+1);
        }
    }
    return 0;
}
