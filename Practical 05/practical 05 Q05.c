#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num,reversednum=0,remainder;
    printf("Enter a number:");
    scanf("%d",&num);

    do {
        remainder=num%10;
        reversednum=reversednum*10+remainder;
        num/=10;
    }while (num!=0);

    printf("Reversed number:%d\n",reversednum);
    return 0;
}
