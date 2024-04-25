#include <stdio.h>
#include <stdlib.h>

int main()
{
    char marks[10];
    int i;
    int total=0;
    printf("Enter the 10 marks:\n");
    for (i=0;i<10;i++){
        printf("Enter mark %d:",i+1);
        scanf("%d",&marks[i]);
        total=marks[i];
    }

   double average=(double)total/10.0;
   printf("Total marks:%d\n",total);
   printf("Average:%2f\n",average);

   if (average<50.0){
    printf("Fail\n");
   }else{
   printf("Pass\n");
   }


    return 0;
}
