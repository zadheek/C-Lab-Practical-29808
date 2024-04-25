#include <stdio.h>
#include <stdlib.h>

  void printfactors(int number){
    int i;

    printf("factors of %d:",number);
    for (i=1;i<=number;i++){
        if (number%i==0){
            printf("%d",i);
        }
    }
    printf("\n");
}

int main(){
    int number;
    printf("Enter an integer:");
    scanf("%d",&number);

    printfactors(number);

    return 0;
}
