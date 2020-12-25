#include <stdio.h>
typedef unsigned long long verylong;
verylong factorial(verylong number)
{
    if(number==0)
        return 1;
    return number*factorial(number-1);
}
verylong main(void) {
    verylong repeat,number;
    scanf("%lld",&repeat);
    while(repeat)
    {
        scanf("%lld",&number);
        printf("%lld\n",factorial(number));
        repeat--;
    }
	return 0;
}
