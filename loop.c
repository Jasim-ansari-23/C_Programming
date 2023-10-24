// //for loop
int main()
{
    for (int i = 10; i; i--)
    {
        printf("10 X %d = %d\n", i, 10 * i);
    }
    return 0;
}

int main()
{
    printf("Table of 2\n");

    for (int i = 1; i <= 10; i++)
    {
        printf("%d\n", 2 * i);
    }
    return 0;
}

#include <stdio.h>

int main()
{
    int n, i;
    
    printf("Enter the number that you want in the form of table\n");
    scanf("%d", &n);

    for(i = 1; i<=10; i++){
        printf("Table of %d x %d = %d\n", n, i, n*i);
    }
    return 0;
}

int main()
{
    int mul[10];

    for(int i = 0; i<10; i++){
        mul[i] = 5*(i+1);
    }

    for(int i = 0; i<10; i++){
        printf("5 x %d = %d\n", i + 1, mul[i])
    }
    return 0;
}

#include <stdio.h>
int main()
{
    printf("Table of 2\n");
    
    for(int a = 1; a<=10; a++){
        printf("2 X %d = %d\n", a, 2*a);
    }
    return 0;
}

// int fun()
// {
//     for(int i = 0; i < 2;i++)
//     printf("Hello this is jasim ansari\n");
//     fun2();
//     return 0;
// }

// {
//     for (int i = 1; i <= 20; i++)
//     {
//         printf("%d\n", i);
//     }
//     return 0;
// }

// int main()
// {
//     for (char ch = 'a'; ch <= 'z'; ch++)
//     {
//         printf("%c\n", ch);
//     }
//     return 0;
// }

// {
//     int n, i;
//     printf("Enter the value of natural number\n");
//     scanf("%d", &n);

//     for (i = 1; i <= n; i++)
//     {
//         printf("The Natural numbers are %d\n", i);
//     }
//     return 0;
// }
// {
//     int n;
//     printf("Enter the value of n\n");
//     scanf("%d", &n);

//     for(int i = 1; i<=n; i++){
//         printf("%d\n", i);
//     }
//     return 0;
// }
// {
//     int n;
//     printf("Enter the value of n\n");
//     scanf("%d", &n);

//     for(int i = n; i; i--){
//         printf("The values of n %d\n", i);
//     }
//     return 0;
// }

break statement

void main()
{
    int n;
    for(int i = 0; i<=n; i++){
        printf("%d", i);
        if(i==10){
            break;
        }
    }
}

#include <stdio.h>
void main()
{
    for(int i = 0; i<=500; i++){
        printf("%d\n", i);
        if(i==400){
            break;
        }
    }
}

while loop

int main()
{
    int i = 1;
    while(i<=8){
        printf("8\n", 8);
        i++;
    }
    return 0;
}
 // print n number in reversed

 #include <stdio.h>

int main()
{
  int num, i;
  printf("Enter a number: ");
  scanf("%d", &num);
  printf("Natural numbers from %d to 1 are:\n", num);
  i = num;
  while (i >= 1)
  {
    printf("%d\n", i);
    i--;
  }
  return 0;
}

//squar root

#include <stdio.h>

double sqrt(double x) {
   double guess = x / 2.0;
   double prev_guess;

   while (guess != prev_guess) {
      prev_guess = guess;
      guess = (guess + x / guess) / 2.0;
   }

   return guess;
}

int main() {
   double x;
   printf("Enter a number: ");
   scanf("%lf", &x);
   printf("The square root of %.2lf is %.2lf\n", x, sqrt(x));
   return 0;
}

//   int a;
//   scanf("%d", &a);
//   while(a<10){
//     printf("%d\n", a);
//     a++;
//   }

// {
//     int i = 0;
//     while(i<=20){
//         if(i<=20){
//             printf("%d\n", i);
//         }
//         i++;
//     }
//     return 0;
// }

do while loop

// int main()
// {
//     int i = 0;

//     do
//     {
//         printf("This is jasim ansari\n");
//         i++;
//     } while (i < 20);
//     return 0;
// }

// {
//     int i = 0;
//     int number;
//     printf("Enter the value of number\n");
//     scanf("d", &number);

//     do
//     {
//         printf("The enterered number is %d \n", i+1);
//         i++;
//     } while (i < number);
//     return 0;

//print then natural number in reversed mode

#include <stdio.h>

int main()
{
  int n, i;
  printf("Enter the number\n");
  scanf("%d", &n);
  i = n;
  do{
    printf("%d\n", i);
    i--;
  }while(i>=1);
  return 0;
}

//print even or odd number by user's input using for loop

#include <stdio.h>

int main()
{
   int n, o;
   printf("Enter the number\n");
   scanf("%d", &n);

   for (int i = 0; i <= n; i++)
   {
      if (n % 2 == 0)
      {
         printf("%d Even\n", i);
      }
   }

   for (int i = 0; i <= n; i++)
   {
      if (n % 2 == 1)
      {
         printf("%d odd\n", i);
      }
   }
   return 0;
}

//print even or odd number by user's input using for loop in reversed 

#include <stdio.h>

int main()
{
   int n, i;
   printf("Enter the number\n");
   scanf("%d", &n);

   for (i = n; i >= 0; i--)
   {
      if (n % 2 == 0)
      {
         printf("%d even\n", i);
      }
   }
   for (i = n; i >= 0; i--)
   {
      if (n % 2 == 1)
      {
         printf("%d odd\n", i);
      }
   }
   return 0;
}

//in reversed order

#include <stdio.h>
#include <string.h>

int main()
{
    char c[100];
    int i, length;

    printf("Enter your charactor\n");
    gets(c);
    length = strlen(c);

    printf("Reversed string is: ");
    for (i = length - 1; i >= 0; i--)
        printf("%c", c[i]);

    return 0;
}

//factorial of n

#include <stdio.h>

int main()
{
    int num, i, fact = 1;

    printf("Enter the positive intiger\n");
    scanf("%d", &num); 

    for(i = 1; i<=num; i++){
      fact *=1;
    }
    printf("Factorial of %d = %d\n", num, fact);
    return 0;
}

//