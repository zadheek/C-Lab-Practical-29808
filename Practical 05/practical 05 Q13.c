#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num,sum=0;
    printf("Enter numbers to add (enter-1 to stop):\n");

    while(1){
        scanf("%d",&num);

      if (num==-1){
        break;
      }
      sum+=num;
    }
    printf("sum:%d\n",sum);
    return 0;
}
