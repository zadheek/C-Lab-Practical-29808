#include <stdio.h>
#include <stdlib.h>

int main()
{
    int marks[10];
    int i;
    int sum;
    int maximum=0;
    int minimum=100;
    float average;

    printf("Enter the marks of 10 students:\n");

    for(i=0;i<10;i++){
       scanf("%d",&marks[i]);

    if (marks[i]>maximum){
        maximum=marks[i];
    }
    if (marks[i]<minimum){
        minimum=marks[i];
    }
    sum+=marks[i];
    }
    average=(float)sum/10;


    printf("Maximum marks:%d\n",maximum);
    printf("Minimum marks:%d\n",minimum);
    printf("Average marks:%d\n",average);
    return 0;
}
