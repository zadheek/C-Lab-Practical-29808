#include <stdio.h>
#include <stdlib.h>

#define PI 3.14159
int main()
{
    int choice;
    float radius;

    printf("Menu:\n");
    printf("1. Calculate the circumference of a circle\n");
    printf("2. Calculate the area of a circle\n");
    printf("3. Calculate the volume of a sphere\n");
    printf("Enter your choice (1-3): ");
    scanf("%d", &choice);

    switch (choice) {
        case 1: {
            printf("Enter the radius of the circle: ");
            scanf("%f", &radius);
            float circumference = 2 * PI * radius;
            printf("The circumference of the circle is: %.2f\n", circumference);
            break;
        }
        case 2: {
            printf("Enter the radius of the circle: ");
            scanf("%f", &radius);
            float area = PI * pow(radius, 2);
            printf("The area of the circle is: %.2f\n", area);
            break;
        }
        case 3: {
            printf("Enter the radius of the sphere: ");
            scanf("%f", &radius);
            float volume = (4.0 / 3.0) * PI * pow(radius, 3);
            printf("The volume of the sphere is: %.2f\n", volume);
            break;
        }
        default:
            printf("Invalid choice!\n");
    }

    return 0;
}


