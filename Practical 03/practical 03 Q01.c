#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n01,n02,max;
    printf("Enter two numbers");
    scanf("%d %d",&n01,&n02);
    if (n01>n02)         max=n01;
    else
        max=n02;
    printf("The Highest number is %d\n",max);
    return 0;
}
