#include <stdio.h>
void loopin();
void alphabate();

int main()
{
    for (int i = 1; i <= 10; i++)
    {
        printf("%d\n", 2 * i);
    }

    loopin();
    alphabate();
    return 0;
}

void loopin()
{
    int n;

    printf("Enter the natural number, you want\n");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        printf("The natural numbers are - %d\n", i);
    }
}

void alphabate(){
    
    for(char alphabate = 'a'; alphabate<='z'; alphabate++){
        printf("%c\n", alphabate);
    }

}

#include<stdio.h>

void printhello();
void goodbye();

int main(){
    printhello();
    goodbye();
    return 0;
}

void printhello(){
    printf("Hello\n");
}

void goodbye(){
    printf("Goodbye");
}

//print f for french and N for namaste

#include <stdio.h>
void namaste();
void bonjour();

int main()
{
    char ch;
    
    printf("Enter F for french & N for namaste\n");
    scanf("%c", &ch);
    if(ch == 'N'){
        namaste();
    }else if(ch == 'F'){
        bonjour();
    }else{
        printf("Gaand mara");
    }
    return 0;
}
void namaste()
{ 
    printf("Namaste");
}

void bonjour()
{
    printf("Bonjour");
}

//sum of two by user's input

#include<stdio.h>
int sumer(int a, int b);

int main(){
    int a, b;

    printf("Enter the number you want into sum\n");
    scanf("%d", &a);
    
    printf("Enter the number you want into sum\n");
    scanf("%d", &b);
    printf("sum of %d + %d = %d", a, b, a+b);
    return 0;
}

int sumer(int a, int b){
    return a + b;
}

//printing table 

#include<stdio.h>
void table(int n);

int main(){
    int n;
    printf("Enter the number you want table of\n");
    scanf("%d", &n);
    table(n);//arguement/actual parameter
    return 0;
}

void table(int n){//arguement/formal parameter
    for(int i = 1; i<=10; i++){
        printf("%d x %d = %d\n", n, i, n*i);
    }
}

//print gst 

#include<stdio.h>
void calculateprice(float value);

int main(){
    float value = 100;
    calculateprice(value);
    return 0;
}

void calculateprice(float value){
    value = value + (0.18*value);
    printf("Final price is: %f", value);
}

//count

#include<stdio.h>
int printHlo(int count);

int main(){
    printHlo(5);
    return 0;
}

int printHlo(int count){
    if(count == 0){
        return;
    }
    printf("Hello world\n");
    printHlo(count - 1);
}

//printing string 

#include<stdio.h>
int strings(char arr[]);

int main(){
    char first_name[] = "Jasim";
    char last_name[] = "Ansari";

    strings(first_name);
    strings(last_name);
    return 0;
}

int strings(char arr[]){
    for(int i = 0; arr[i]!='\0'; i++){
        printf("%c", arr[i]);
    }
    printf("\n");
}