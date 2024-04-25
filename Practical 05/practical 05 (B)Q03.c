#include <stdio.h>
#include <stdlib.h>

int main()
{
   float prices[10];
    int i;
    float sum = 0;
    float average;
    int countGreaterThan200 = 0;

    printf("Enter the prices of 10 items:\n");

    for (i = 0; i < 10; i++) {
        scanf("%f", &prices[i]);


        sum += prices[i];

        if (prices[i] > 200) {
            countGreaterThan200++;
        }
    }


    average = sum / 10;

    printf("Average value of an item: %.2f\n", average);
    printf("Number of items with price greater than 200: %d\n", countGreaterThan200);
    return 0;
}
