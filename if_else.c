// // The Number Is Positive or Negative

// #include <stdio.h>

// int main()
// {

//     int num;

//     printf("Enter the number\n");
//     scanf("%d", &num);

//     if (num > 0)
//     {
//         printf("The number is positive\n");
//     }
//     else if (num < 0)
//     {
//         printf("The number is nagative\n");
//     }
//     else
//     {
//         printf("The number is zero\n");
//     }
//     return 0;
// }

// {
//     int a, b;
//     printf("Enter the number\n");
//     scanf("%d", &a);
//     if (a % 2 == 0)
//     {
//         printf("%d is even\n", a);
//     }
//     else
//     {
//         printf("%d is odd number", a);
//     }
//     return 0;
// }
// int main()
// {
//     int age;
//     printf("Enter your age\n");
//     scanf("%d", &age);
//     if (age >= 50)
//     {
//         printf("you are above 50, you can work in this company");
//     }
//     else
//     {
//         printf("You are eligible to work here");
//     }
//     return 0;
// }
// {
//     int vote;
//     printf("Enter your age\n");
//     scanf("%d", &vote);
//     if (vote <= 18)
//     {
//         printf("You are less then 18, you can't vote");
//     }
//     else
//     {
//         printf("You are eligible for votting, so you can vote");
//     }
//     return 0;
// }
// {
//     int watch;
//     printf("Enter your eligble age for watching this series, because this is 18+ series it's fully adult\n");
//     scanf("%d", &watch);

//     if (watch <= 18)
//     {
//         printf("You are not 18 years old, so you can't watch this series, because this is 18+ series it's fully adult");
//     }
//     else
//     {
//         printf("You are older then 18 years, so you can watch this series, be careful it's watch alone series");
//     }
//     return 0;
// }
// {
//     int work;
//     printf("Enter your age for working here\n");
//     scanf("%d", &work);

//     if (work <= 20 && work >= 60)
//     {
//         printf("You age is coming under the 20 and 60, so you are eligible to work here");
//     }
//     else
//     {
//         printf("Your age is less then 20 and you are older then 60, so you are not eligible");
//     }
//     return 0;
// }
// int main()
// {
//     int work;
//     printf("Enter your eligiblity age for working here\n");
//     scanf("%d", &work);

//     if (work <= 20)
//     {
//         printf("You age is less then 20 years, so you are not capable to work here\n");
//     }
//     else if (work >= 60)
//     {
//         printf("You are older then 60 years, so you are not capable to work here\n");
//     }
//     else
//     {
//         printf("You are under 20 and 60, so you are capable to work here\n");
//     }
//     return 0;
// }

// {
//     char ch;
//     printf("Enter the vowels or consonat to know?\n");
//     scanf("%c", &ch);

//     if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
//     {
//         printf("This is vowel\n");
//     }
//     else
//     {
//         printf("This is consonant");
//     }
//     return 0;
// }

// #include <stdio.h>

// int main()
// {
//     char c;

//     printf("Enter the character to check which Character is an Alphabet or Not\n", c);
//     scanf("%c", &c);

//     if ((c >= 'a' && c >= 'z') || (c >= 'A' && c >= 'Z'))
//     {
//         printf("%c is alphabet\n", c);
//     }

//     else
//     {
//         printf("%c is not alphabet\n", c);
//     }

//     return 0;
// }

// {
//     int num1, num2;

//     printf("Enter the first number\n");
//     scanf("%d", &num1);
//     printf("Enter the second number\n");
//     scanf("%d", &num2);

//     if (num1 > num2)
//     {
//         printf("This is the largest number%d\n", num1);
//     }
//     else
//     {
//         printf("This is the largest number%d\n", num2);
//     }
//     return 0;
// }

// #include <stdio.h>

// int main()
// {
//     float english, hindi, political_science, sociology, economics, total, percentage;

//     printf("Enter the English marks?\n");
//     scanf("%f", &english);

//     printf("Enter the Hindi marks?\n");
//     scanf("%f", &hindi);

//     printf("Enter the Political Science marks?\n");
//     scanf("%f", &political_science);

//     printf("Enter the Sociology marks?\n");
//     scanf("%f", &sociology);

//     printf("Enter the Economics marks?\n");
//     scanf("%f", &economics);

//     total = english + hindi + political_science + sociology + economics;
//     percentage = (total / 500) * 100;

//     if (percentage >= 30)
//     {
//         printf("Total marks: %.2f\n", total);
//         printf("Percentage: %.2f%%\n", percentage);
//         printf("Result: Pass\n");
//     }
//     else
//     {
//         printf("Total marks: %.2f\n", total);
//         printf("Percentage: %.2f%%\n", percentage);
//         printf("Result: Fail\n");
//     }
//     return 0;
// }

// //Input any character and check whether it is the alphabet, digit or special character

// #include<stdio.h>
// #include<ctype.h>

// int main(){
//     char c;

//     printf("Enter the charactor to chek whether is digit or special charactor\n");
//     scanf("%c", &c);

//     if(isalpha(c)){
//         printf("The %c is charator", c);
//     }else if(isdigit(0)){
//         printf("The %c is digit", c);
//     }else{
//         printf("The %c is special charactor", c);
//     }
//     return 0;
// }

// //what is Armstrong number

// #include<stdio.h>  
//  int main()    
// {    
// int n,r,sum=0,temp;    
// printf("enter the number=");    
// scanf("%d",&n);    
// temp=n;    
// while(n>0)    
// {    
// r=n%10;    
// sum=sum+(r*r*r);    
// n=n/10;    
// }    
// if(temp==sum)    
// printf("armstrong  number ");    
// else    
// printf("not armstrong number");    
// return 0;  
// }  

// //print even number 

// #include <stdio.h>

// int main()
// {
//   int num, i;
//   printf("Enter a number: ");
//   scanf("%d", &num);
//   printf("Even or Odd numbers from 1 to %d are:\n", num);
//   for (i = 1; i <= num; i++)
//   {
//     if (i % 2 == 0)
//     {
//       printf("%d is even\n", i);
//     }
//     else
//     {
//       printf("%d is odd\n", i);
//     }
//   }
//   return 0;
// }

// //