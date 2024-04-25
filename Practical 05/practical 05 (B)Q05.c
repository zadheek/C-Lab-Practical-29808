#include <stdio.h>
#include <stdlib.h>

int main()
{
    int employeeNo;
    float hoursWorked;
    int count = 0;
    int countExceeding4000 = 0;

    printf("Enter the employee number and hours worked (-999 to end):\n");

 while(1){
    scanf("%d", &employeeNo);

        if (employeeNo == -999) {
            break;
        }

        scanf("%f", &hoursWorked);

        float overtimePayment = 0;

        if (hoursWorked > 40) {
            float normalRateHours = 40;
            float extraHours = hoursWorked - 40;

            overtimePayment = (normalRateHours * 150) + (extraHours * 200);
        } else {
            overtimePayment = hoursWorked * 150;
        }

        printf("Employee Number: %d\n", employeeNo);
        printf("Overtime Payment: %.2f\n", overtimePayment);

        if (overtimePayment > 4000) {
            countExceeding4000++;
        }

        count++;
    }

    float percentage = (float) countExceeding4000 / count * 100;

    printf("Percentage of employees with overtime payment exceeding Rs. 4000: %.2f%%\n", percentage);
    return 0;
}
