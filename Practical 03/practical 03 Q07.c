#include <stdio.h>
#include <stdlib.h>

int main()
{
    float basic_sal,gross_sal,sales;
    int service_yrs;   char city;
    printf("Enter the basic salary : ");
    scanf("%f",&basic_sal);
    printf("Enter the years of the service : ");
    scanf("%d",&service_yrs);
    printf("Enter 'C' if the working city is Colombo. If not Enter Any other letter :");
    scanf("%s",&city);
    printf("Monthly sales : ");
    scanf("%f",&sales);
    if (service_yrs>5)
    gross_sal = basic_sal + basic_sal*10/100;
     else
    gross_sal = basic_sal;
    switch(city)
{   case 'c' :
    gross_sal = gross_sal + 2500;break;
    case 'C' :
    gross_sal = gross_sal + 2500;break;
    default :gross_sal = gross_sal;
}
  if (sales<25000)
    gross_sal = gross_sal + sales*10/100;
  else if
    (sales<50000)gross_sal = gross_sal + sales*12/100;
  else
    gross_sal = gross_sal + sales*15/100;
    printf("Gross salary = %.2f \n",gross_sal);
    return 0;
}
