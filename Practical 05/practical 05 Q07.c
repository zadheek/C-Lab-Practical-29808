#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1=0,num2=1,nextnum,i;
    printf("fibonacci sequence:");
    for (i=1;i<=10;++i){
        printf("%d,",num1);
        nextnum=num1+num2;
        num1=num2;
        num2=nextnum;

    }
    return 0;
}
