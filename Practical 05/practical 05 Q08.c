#include <stdio.h>
#include <math.h>


int isArmstrong(int number) {
    int originalNum, remainder,digits=0,result=0,n=0;

    originalNum= number;

    while (originalNum!=0) {
        originalNum/=10;
        digits++;
    }

    originalNum=number;

    while (originalNum != 0) {
        remainder = originalNum % 10;
        result += pow(remainder,digits);
        originalNum /= 10;
    }

    if (result == number) {
        return 1;
    } else {
        return 0;
    }
}
int main(){
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    if (isArmstrong(number)) {
        printf("%d is an Armstrong number.\n", number);
    } else {
        printf("%d is not an Armstrong number.\n", number);
    }

    return 0;
}


