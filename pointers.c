//first code 

#include<stdio.h>

int main(){
    int age = 20;
    int *ptr = &age;
    int _age = *ptr;

    printf("%d", _age);
    return 0;
}

#include <stdio.h>
int main()
{
    int i = 34; 
    int *j = &i;
    printf("%d\n", *j);
    return 0;
}

//for checking integer bytes

#include <stdio.h>
int main()
{
    int i = 34;
    int *ptr = &i;

    printf("The value of ptr is %u\n", ptr);
    ptr++;
    printf("The value of ptr after loop is %u\n", ptr);
    return 0;
}

#include <stdio.h>
int main()
{
    int marks[4];
    int *ptr;
    ptr = &marks[0];
    ptr = marks;

    for(int i = 0; i<4; i++){
        printf("Enter the 4 students marks here: %d\n", i+1);
        scanf("%d", ptr);
        ptr++;
    }

    for(int i = 0; i<4; i++){
        printf("The marks of all students %d are %d \n", i+1, marks[i]);
    }
}

//for creating address using pointer

#include <stdio.h>

int main()
{
    int x;
    int *ptr;
    ptr = &x;
    *ptr = 0;

    printf("x = %d\n", x);
    printf("*ptr = %d\n", *ptr);

    *ptr += 5;
    printf("x = %d\n", x);
    printf("*ptr = %d\n", *ptr);

    (*ptr)++;
    printf("x = %d\n", x);
    printf("*ptr = %d\n", *ptr);
    return 0;
}

//call by value and reffrence 

#include<stdio.h>

int main(){
    float price = 200;
    float *ptr = &price;
    float **pptr = &ptr;
    printf("%f", **pptr);
    return 0;
}

#include<stdio.h>
void square(int n);
void _square(int* n);
int main(){
    int number = 4;
    square(number);
    printf("number = %d\n", number);

    _square(&number);
    printf("number = %d\n", number);
    return 0;
}

void square(int n){
    n = n*n;
    printf("square = %d\n", n);
}

void _square(int* n){
    *n = (*n) * (*n);
    printf("square = %d\n", *n);
}

#include <stdio.h>
void printAddress(int n);

int main()
{
    int n = 10;
    printf("%u\n", &n);
    printAddress(n);
    return 0;
}

void printAddress(int n){
    printf("%u\n", &n);
}



//for swapping a = b, b = a;

#include <stdio.h>
void swap(int a, int b);

int main()
{
    int a = 5, b = 8;
    swap(a, b);
    return 0;
}

void swap(int a, int b)
{
    int t = a;
    a = b;
    b = t;
    printf("a = %d, b = %d\n", a, b);
}


#include<stdio.h>

void swap(int *a,int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main(){
    int a, b;
    printf("Enter the 1st value\n");
    scanf("%d", &a);
    printf("Enter the 2nd value\n");
    scanf("%d", &b);

    printf("Befor swapping value a = %d, b = %d\n", a, b);

    swap(&a, &b);
    printf("After swapping value a = %d, b = %d\n", a, b);
    return 0;
}

//call by reffrence 

#include <stdio.h>
void swap(int *a, int *b);

int main()
{
    int a = 5, b = 8;
    swap(&a, &b);
    printf("a = %d, b = %d\n", a, b);
    return 0;
}

void swap(int *a, int *b)
{
    int t = *a;
    *a = *b;
    *b = t;
}

#include <stdio.h>
void printAddress(int *n);

int main()
{
    int n = 10;
    printf("%u\n", &n);
    printAddress(&n);
    return 0;
}

void printAddress(int *n){
    printf("%u\n", n);
}

//sum of two intigers

#include <stdio.h>
void dowork(int a, int b, int *sum, int *prod, int *avg);

int main()
{
    int a = 10, b = 12;
    int sum, prod, avg;
    dowork(a, b, &sum, &prod, &avg);
    
    printf("sum = %d, prod = %d, avg = %d", sum, prod, avg);
    return 0;
}

void dowork(int a, int b, int *sum, int *prod, int *avg){
    *sum = a+b;
    *prod = a*b;
    *avg = (a+b)/2;
}

//check the value of an intiger

#include<stdio.h>

int main(){
  int a;
  float b;
  char c;

  a = 20;
  b = 10.2;
  c = 'J';

  printf("%d is stored in location %u\n", a, &a);
  printf("%f is stored in location %u\n", b, &b);
  printf("%c is stored in location %u\n", c, &c);
  return 0;
}