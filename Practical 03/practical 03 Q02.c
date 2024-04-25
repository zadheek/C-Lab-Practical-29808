#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c, large, small;

   printf("Enter Three Number\n");
   scanf("%d %d %d",&a,&b,&c);


  if(a>b)
  {
      if(a>c)
        large = a;
      else
        large = c;
  }
  else
  {
      if(b>c)
      large= b;
      else
        large = c;
  }

  if(a<b)
  {
      if(a<c)
        small = a;
      else
        small = c;
  }
  else
  {
      if(b<c)
        small = b;
      else
        small = c;
  }
 printf("%d is largest number\n",large);
 printf("%d is Smallest Number ",small);

return 0;
}
