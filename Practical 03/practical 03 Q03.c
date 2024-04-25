#include <stdio.h>
#include <stdlib.h>

int main()
{
   char empname[20];
   float bs,inc,ns;
   printf("Enter Employee Name\n");
   scanf("%s",&empname);
   printf("Enter Basic salary\n");
   scanf("%f",&bs);
   if (bs>=10,000)
    inc=bs*0.15;
   else if
    (bs>=5,000)
    inc=bs*0.10;
   else
    inc=bs*0.05;
   ns=bs+inc;
   printf("Empolyee Name %s \n",empname);
   printf("New salary %.2f",+ns);


return 0;
}
