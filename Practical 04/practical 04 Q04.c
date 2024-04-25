#include <stdio.h>
#include <stdlib.h>

int main()
{
  char x;
  int lowercase_vowel,uppercase_vowel;
  printf("Enter your character\n");
  scanf("%c",&x);

  switch(x)
  {
  case 'a':
    printf("%c is a lowercase vowel",x);
    break;

  case 'A':
    printf("%c is a uppercase vowel",x);
    break;

  case 'e':
    printf("%c is a lowercase vowel",x);
    break;

  case 'E':
    printf("%c is a uppercase vowel",x);
    break;

  case 'i':
    printf("%c is a lowercase vowel",x);
    break;

  case 'I':
    printf("%c is a uppercase vowel",x);
    break;

  case 'o':
    printf("%c is a lowercase vowel",x);
    break;

  case 'O':
    printf("%c is a uppercase vowel",x);
    break;

  case 'u':
    printf("%c is a lowercase vowel",x);
    break;

  case 'U':
    printf("%C is a uppercase vowel",x);
    break;

  default:
    printf("%c is not a vowel",x);
  }
    return 0;
}
