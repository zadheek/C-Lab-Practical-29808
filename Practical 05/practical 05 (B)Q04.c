#include <stdio.h>
#include <stdlib.h>

int main()
{
    int employeenum;
    float basicSalary;
    int count = 0;

    printf("Enter the employee number and basic salary (-999 to end):\n");

    while (1) {
        scanf("%d", &employeenum);
        if (employeenum == -999) {
            break;
        }

        scanf("%f", &basicSalary);

        if (basicSalary >= 5000) {
            count++;
        }
    }

    printf("Number of employees with basic salary >= 5000: %d\n", count);
    return 0;
}
