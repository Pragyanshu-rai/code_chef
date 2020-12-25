#include<stdio.h>
int main()
{
    int test_case,first_number,second_number,remainder,temp;
    scanf("%d",&test_case);
    while(test_case)
    {
        scanf("%d %d",&first_number,&second_number);
        remainder=0;
        temp=first_number/second_number;
        remainder=first_number-(second_number*temp);
        printf("%d\n",remainder);
        test_case--;
    }
    return 0;
}
