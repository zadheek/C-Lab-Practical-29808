#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num,remainder,sum;
    printf("Enter a number:");
    scanf("%d",&num);

    while (num!=0){
        remainder=num%10;
        sum+=remainder;
        num/=10;
    }
    printf("The sum of the digits is:%d\n",sum);
    return 0;
}
