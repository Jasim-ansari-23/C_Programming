//[^\n] stands for taking input until a newline isn't encountered.

#include <stdio.h>

int main()
{
  char n[100];
  printf("Enter your name\n");
  scanf("%[^\n]s",n);
  printf("%s",n);
  return 0;
}

//[^b] means it can ask input till when you haven't added 'b' into the last line that means it can't print after 'b' string

#include <stdio.h>

int main()
{
  char n[100];
  printf("Enter your name\n");
  scanf("%[^b]s",n);
  printf("%s",n);
  return 0;
}

//