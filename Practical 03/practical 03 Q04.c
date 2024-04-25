#include <stdio.h>
#include <stdlib.h>

int main()
{
       int radius,diameter;
       double constantvalue,circumference,area;
       printf("Enter Radius of the circle\n");
       scanf("%d",&radius);
       diameter=radius*2;
       constantvalue=3.14159;
       circumference=constantvalue*diameter;
       area=constantvalue*radius*radius;
       printf("The diameter is %d\n",diameter);
       printf("The circumference is %f\n",circumference);
       printf("the area of the circle is %f\n",area);
    return 0;
}
