//typecasting datatype

#include <stdio.h>

int main()
{
  int a = 5;
  float b = 6.8;
  printf("The value of the %d", (int) b);
  return 0;
}

// Write a C program to accept two integers and check whether they are equal or not.

#include <stdio.h>

int main()
{
    int num1, num2;

    printf("Enter num1 and num2 to equal or not\n");
    scanf("%d %d", &num1, &num2);

    if (num1 == num2)
    {
        printf("The numbers you have entered %d and %d is equal", num1, num2);
    }
    else
    {
        printf("The numbers you have entered %d and %d isn't equal", num1, num2);
    }
    return 0;
}

// for adding some text

#include <stdio.h>

int main()
{
    FILE *ptr;
    char ch[100];
    ptr = fopen("data.txt", "w");

    fprintf(ptr, "The is the text that I'm adding laure");
    fclose(ptr);
    return 0;
}

#include <stdio.h>

int main()
{
    FILE *ptr;
    int n;
    ptr = fopen("data.txt", "r");
    fscanf(ptr, "%d", &n);
    printf("%d\n", n);
    fscanf(ptr, "%d", &n);
    printf("%d\n", n);
    fscanf(ptr, "%d", &n);
    printf("%d\n", n);
    fscanf(ptr, "%d", &n);
    printf("%d\n", n);
    fscanf(ptr, "%d", &n);
    printf("%d\n", n);

    fclose(ptr);
    return 0;
}

#include <stdio.h>

int main()
{
    int number;
    printf("Enter an integer: ");
    scanf("%d", &number);

    if (number % 2 == 0)
        printf("%d is even.\n", number);
    else
        printf("%d is odd.\n", number);

    return 0;
}

// leap year

#include <stdio.h>

int main()
{
    int year;
    printf("Enter Your Year\n");
    scanf("%d", &year);
    if (year % 4 == 0)
    {
        printf("This year is a leap year\n");
    }
    else
    {
        printf("it is not leap year\n");
    }
    return 0;
}

// divisible

#include <stdio.h>

int main()
{
    int digit;
    printf("Enter Your Digit\n");
    scanf("%d", &digit);
    if (digit % 5 == 0)
    {
        printf("Divisible by 5\n");
    }
    else if (digit % 9 == 0)
    {
        printf("divisibe by 9\n");
    }
    else
    {
        printf("not divisible\n");
    }
    return 0;
}

//lowercas

#include <stdio.h>

int main()
{
    char c;

    printf("Enter the character to check whether is upper case or lower case\n");
    scanf("%c", &c);

    if((c>= 'A' && c<='Z')){
        printf("%c is Uppercase", c);
    }
    else{
        printf("%c is lowercase", c);
    }
    return 0;
}

//Week day

#include <stdio.h>

int main()
{
    int week;

    printf("Enter the week day between 1-7\n");
    scanf("%d", &week);

    if(week == 1){
        printf("%dth day is Monday", week);
    }
    else if(week ==2){
        printf("%dnd day is Tuesday", week);
    }
    else if(week ==3){
        printf("%drd day is Wednesday", week);
    }
    else if(week ==4){
        printf("%dth day is Thursday", week);
    }
    else if(week ==5){
        printf("%dth day is Friday", week);
    }
    else if(week ==6){
        printf("%dth day is Saturday", week);
    }
    else if(week ==7){
        printf("%dth day is Sunday, gaand mara laure", week);
    }
    else{
        printf("You have entered the wrong input please enter between 1-7");
    }
    return 0;
}

//profit loss

#include<stdio.h>

int main(){
    int cost_price, sell_price, amount;

    printf("Enter the Cost price\n");
    scanf("%d", &cost_price);

    printf("Enter the Sell price\n");
    scanf("%d", &sell_price);

    if(sell_price > cost_price){
        amount = sell_price - cost_price;
        printf("Profit = %d", amount);
    }
    else if(cost_price > sell_price){
        amount = cost_price - sell_price;
        printf("Loss = %d", amount);
    }
    else{
        printf("No profit and No loss");
    }
    return 0;
}

//Generate IP (Internet Protocol) Addresses Using

#include <stdio.h>

int main()
{
    for (int i = 0; i <= 255; i++)
    {
        for (int j = 0; j <= 255; j++)
        {
            for (int k = 0; k <= 255; k++)
            {
                for (int l = 0; l <= 255; l++)
                {
                    printf("%d.%d.%d.%d\n", i, j, k, l);
                }
            }
        }
    }

    return 0;
}


#include <stdio.h>

int main()
{
    int week;

    printf("Enter the week day between 1-7\n");
    scanf("%d", &week);

    switch (week){
        case 1: printf("Monday");
        break;
        case 2: printf("Tuesday");
        break;
        case 3: printf("Wednesday");
        break;
        case 4: printf("Thursday");
        break;
        case 5: printf("Friday");
        break;
        case 6: printf("Saturday");
        break;
        case 7: printf("Sunday");
        break;
        default: printf("Gslat h laure");
    }
    return 0;
}

#include <stdio.h>

int main()
{
    int marks[5];
    int sum = 0;
    int *ptr = &marks[1];
    for (int i = 1; i <= 5; i++)
    {
        printf("Enter the number %d\n", i, marks[i]);
        scanf("%d", &marks[i]);
    }
    for (int i = 1; i <= 5; i++)
    {
        printf("the %d is %d\n", i, marks[i]);
    }
    for (int i = 1; i <= 5; i++)
    {
        sum += marks[i];
        printf("the sum is %d\n", sum);
    }

    return 0;
}

#include <stdio.h>
#include <string.h>

int main()
{
    char string[100];
    int i, length;

    printf("Enter a string to reverse: ");
    scanf("%s", string);

    length = strlen(string);

    printf("Reversed string is: ");
    for (i = length - 1; i >= 0; i--)
        printf("%c", string[i]);

    return 0;
}

#include <stdio.h>
#include <string.h>

int main()
{
    char str[] = "welcome";
    int i, length;

    length = strlen(str);

    printf("Reversed string is: ");
    for (i = length - 1; i >= 0; i--)
        printf("%c", str[i]);

    return 0;
}
#include <stdio.h>

int main() {
   int num, reversed = 0, digit, sum = 0;

   printf("Enter a number: ");
   scanf("%d", &num);

   while (num != 0) {
      digit = num % 10;
      reversed = reversed * 10 + digit;
      num /= 10;
   }

   num = reversed;
   while (num != 0) {
      digit = num % 10;
      sum += digit;
      num /= 10;
   }

   printf("The reversed number is: %d\n", reversed);
   printf("The sum of the digits is: %d\n", sum);

   return 0;
}

//factorial

#include <stdio.h>

int main()
{
  int n, i, f;
  printf("Enter the number\n");
  scanf("%d", &n);
  f = 1;
  for (i = 1; i <= n; i++)
  {
    f = f * i;
  }
  printf("The factorial of %d = %d", n, f);
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

#include <stdio.h>

int main()
{
    int n, i, flag = 0;
    printf("Enter a positive integer: ");   
    scanf("%d", &n);
    for (i = 2; i <= n / 2; ++i)
    {
        if (n % i == 0)
        {
            flag = 1;
            break;
        }
    }
    if (n == 1)
    {
        printf("1 is neither a prime nor a composite number.");
    }
    else
    {
        if (flag == 0)
            printf("%d is a prime number.", n);
        else
            printf("%d is not a prime number.", n);
    }

    return 0;
}