// there are deferent types of bitwise operators
// Bitwise AND (&)
// Bitwise OR (|)
// Bitwise XOR (^) - both output should be the same then its (zero) otherwise will be the 1 if its deferent
// Bitwise NOT (~)
// Left Shift (<<)
// Right Shift (>>)

#include <stdio.h>

int main()
{
  int a = 12, b = 10;
  printf("The bitwise OR operator is %d\n", a|b);
  printf("The bitwise & operator is %d\n", a&b);
  printf("The bitwise XOR operator is %d\n", a^b);
  return 0;
}

//bitwise right shift(>>) operator - means it'll shift right but ignored, whatever you have integer added into last, the exact number will be change like added 4 or 2 will be change

#include <stdio.h>

int main()
{
  int a = 10, c;
  c=a>>2;
  printf("The bitwise Right shift >> operator is %d\n", c);
  return 0;
}

//bitwise left shift(<<) operator - means it'll shift left but ignored, whatever you have integer added first, the exact number will be change like added 4 or 2 will be change

#include <stdio.h>

int main()
{
  int a = 10, c;
  c=a<<2;
  printf("The bitwise Right shift >> operator is %d\n", c);
  return 0;
}

