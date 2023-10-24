#include <stdio.h>

int main()
{
    char *ptr = "Jasim";
    printf("%s", ptr);
    return 0;
}

// for user inputting

#include <stdio.h>

int main()
{
    char s[100];

    printf("Enter your name: ");
    scanf("%s", s);

    printf("Your name is %s", s);
    return 0;
}

// For multiple words and spaces

#include <stdio.h>

int main()
{
    char s[100];

    printf("Enter your name: ");
    gets(s);

    printf("Your name is %s", s);
    return 0;
} 

//for printing strings on anathor line

#include <stdio.h>

int main()
{
    char s[100];

    printf("Enter your name: ");
    gets(s);
    puts(s);

    // printf("Your name is %s", s);
    return 0;
}

//for using multiple scanf - use - fflush(stdin);

#include <stdio.h>

int main()
{
    char n[100];
    char p[100];
    int age;

    printf("Enter your full name here\n");
    gets(n);

    printf("Enter your age here\n");
    scanf("%d", &age);
    fflush(stdin);

    printf("Enter your full address here\n");
    gets(p);

    printf("Your full name is: - %s\n", n);
    printf("Your age is: - %d\n", age);
    printf("Your address is: - %s\n", p);

    return 0;
}

//contact form

#include <stdio.h>

int main()
{
    char n[100];
    int mobile;
    char e[100];
    char a[100];
    char m[100];

    printf("Enter your full name\n");
    gets(n);

    printf("Enter your mobile number\n");
    scanf("%d", &mobile);
    fflush(stdin);

    printf("Enter your email address\n");
    gets(e);

    printf("Enter your address\n");
    gets(a);

    printf("Enter your message\n");
    gets(m);

    printf("Your full name is - %s\n", n);
    printf("Your Mobile number is - %d\n", mobile);
    printf("Your Email address is - %s\n", e);
    printf("Your Address is - %s\n", a);
    printf("Your Message is - %s\n", m);
    printf("We have got your all details above, and we'll touch your within 24Hours, thank you for your valuble time.\n");

    return 0;
}

//printing strings using fanction

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

//defining the size of strings

#include <stdio.h>
#include <string.h>
int countlength(char arr[]);
int strings(char arr[]);

int main()
{
    char name[] = "Jasim ansari";
    int length = strlen(name);
    fgets(name, 100, stdin);
    printf("length is %d", length);
    return 0;
}

int countlength(char arr[]){
    int count = 0;
    for(int i = 0; arr[i]!='\0'; i++){
        count ++;
    }
    return count;
}

//change the string using pointer

#include <stdio.h>

int main() {
    char *change = "Jasim ns";
    puts(change);
    change = "Jasim ansari";
    puts(change);
    return 0; 
}

//replace the old strings into a new strings by using (strcpy)

#include <stdio.h>
#include <string.h>

int main() {
    char newstr[] = "Jibrail";
    char oldstr[] = "Jasim";
    strcpy(newstr, oldstr);
    puts(newstr);
    return 0; 
}

//if you want to print two string strings in concatination using (strcat).

#include <stdio.h>
#include <string.h>

int main() {
    char j[100] = "Jasim ";
    char a[100] = "Ansari";
    strcat(j, a);
    puts(j);
    return 0; 
}

//capare two strings using (strcpm)

#include <stdio.h>
#include <string.h>

int main() {
    char fstr[] = "Jasim";
    char sstr[] = "Kasim";
    printf("%d", strcmp(fstr, sstr));
    return 0; 
}

//ACCII VALUE

#include <stdio.h>
#include <string.h>

int main() {
    char fstr[] = "Jasim";
    char sstr[] = "Kasim";
    printf("%d", strcmp(sstr, fstr));
    return 0; 
}

//both same strings

#include <stdio.h>
#include <string.h>

int main() {
    char fstr[] = "Jasim";
    char sstr[] = "Jasim";
    printf("%d", strcmp(fstr, sstr));
    return 0; 
}

//print string without using (gets)

#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    char ch;
    int i = 0;

    while(ch !='\n'){
        scanf("%c", &ch);
        str[i] = ch;
        i++;
    }
    str[i] = '\0';
    puts(str);
    return 0; 
}

//Input any character and check whether it is the alphabet, digit or special character

#include<stdio.h>
#include<ctype.h>

int main(){
    char c;

    printf("Enter the charactor to chek whether is digit or special charactor\n");
    scanf("%c", &c);

    if(isalpha(c)){
        printf("The %c is charator", c);
    }else if(isdigit(0)){
        printf("The %c is digit", c);
    }else{
        printf("The %c is special charactor", c);
    }
    return 0;
}

//