#include<stdio.h>
int main()
{
    int repeat,first_operand,second_operand;
    scanf("%d",&repeat);
    while(repeat)
    {
        scanf("%d %d",&first_operand,&second_operand);
        printf("%d\n",first_operand+second_operand);
        repeat--;
    }
    return 0;
}
