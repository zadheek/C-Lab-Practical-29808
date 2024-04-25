#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numbers[10];
    int i,positivecount=0,negativecount=0,zerocount=0;

    printf("Enter 10 numbers:\n");

    for(i=0;i<10;i++){
        scanf("%d",&numbers[i]);
    }
    for(i=0;i<10;i++){
        if(numbers[i]>0){
        positivecount++;
    }else if(numbers[i]<0){
        negativecount++;
    }else{
        zerocount++;
      }
    }
    printf("positive numbers:%d\n",positivecount);
    printf("negative numbers:%d\n",negativecount);
    printf("zero numbers:%d\n",zerocount);
    return 0;
}
