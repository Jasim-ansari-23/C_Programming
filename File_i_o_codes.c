//"r" used for reading the file
//"rd" used for reading the file in binary
//"w" used for writting the file
//"Wb" used for writting the file in binary
//"a" open for append
//fscanf is used to read data from a file.
//fprintf is used to write data to files
//fgetc for reading one character
//fputc for writting the one character

#include<stdio.h>

int main(){
    FILE *ptr;
    ptr = fopen("generated.txt", "r");
    char j, a, s, i, m;

    fscanf(ptr, "%c %c %c %c %c", &j, &a, &s, &i, &m);
    printf("%c%c%c%c%c", j, a, s, i, m);
    
    fclose(ptr);
    return 0;
}

#include <stdio.h>

int main()
{
    int a, b, c;
    FILE *ptr;
    ptr = fopen("generated.txt", "r");
    fscanf(ptr, "%c %c %c", &a, &b, &c);
    printf("The file you're looking for reading purpose only is %c %c %c", a, b, c);
    return 0;
}

#include<stdio.h>

int main(){
    FILE *ptr;
    ptr = fopen("generated.txt", "r");
    char ch;

    fscanf(ptr, "%c", &ch);
    printf("the character is %c\n", ch);
    fscanf(ptr, "%c", &ch);
    printf("the character is %c\n", ch);
    fscanf(ptr, "%c", &ch);
    printf("the character is %c\n", ch);
    fscanf(ptr, "%c", &ch);
    printf("the character is %c\n", ch);
    fscanf(ptr, "%c", &ch);
    printf("the character is %c", ch);
    
    fclose(ptr);
    return 0;
}

//for reading 

#include <stdio.h>

int main()
{
    FILE *ptr;
    int num;
    ptr = fopen ("sample.txt", "r");
    fscanf(ptr, "%d", &num);

    printf("The value of numbr is %d\n", num);
    return 0;
}

//for double diclaration 

#include <stdio.h>

int main()
{
    FILE *ptr;
    int num;
    int num2;
    ptr = fopen ("sample.txt", "r");
    fscanf(ptr, "%d", &num);
    fscanf(ptr, "%d", &num2);

    printf("The value of numbr is %d %d\n", num, num2);
    return 0;
}

//for clossing the file

#include <stdio.h>

int main()
{
    FILE *ptr;
    int num;
    int num2;
    ptr = fopen ("sample.txt", "r");
    fscanf(ptr, "%d", &num);
    fscanf(ptr, "%d", &num2);
    fclose(ptr);

    printf("The value of numbr is % d %d\n", num, num2);
    return 0;
}

//for checking file is existing or not

#include <stdio.h>

int main()
{
    FILE *ptr;
    int num;
    int num2;
    ptr = fopen("s1ample.txt", "r");
    if (ptr == NULL)
    {
        printf("the file you're looking for doesn't exist\n");
    }
    else
    {
        fscanf(ptr, "%d", &num);
        fscanf(ptr, "%d", &num2);
        fclose(ptr);

        printf("The value of numbr is %d %d\n", num, num2);
    }
    return 0;
}

//for creating a new file and adding some text in a generated file 

#include <stdio.h>

int main()
{
    FILE *fptr;
    int number = 50;
    fptr = fopen("generated.txt", "w");
    fprintf(fptr, "The number of a new file is %d number", number);
    fclose(fptr);
    return 0;
}

//for reading the file 

#include <stdio.h>

int main()
{
    FILE *ptr;
    ptr = fopen("generated.txt", "r");
    // char c = fgetc(ptr);
    printf("The value of my character is %c\n", fgetc(ptr));
    printf("The value of my character is %c\n", fgetc(ptr));
    printf("The value of my character is %c\n", fgetc(ptr));
    printf("The value of my character is %c\n", fgetc(ptr));
    printf("The value of my character is %c\n", fgetc(ptr));
    printf("The value of my character is %c\n", fgetc(ptr));
    return 0;
}
    
//for adding something using putc in a new file

#include <stdio.h>

int main()
{
    FILE *ptr;
    ptr = fopen("generateded.txt", "w");
    putc('g', ptr);
    putc('a', ptr); 
    putc('a', ptr);
    putc('n', ptr);
    putc('u', ptr);
    putc('d', ptr);
    fclose(ptr);
    return 0;
}

//for reading the character's whoole file using while loop and (EOF) means to end up the file reader

#include <stdio.h>

int main()
{
    FILE *ptr;
    char c;
    ptr = fopen("generated.txt", "r");
    c = fgetc(ptr);
    while(c!=EOF){
        printf("%c", c);
        c = fgetc(ptr);
    }

    return 0;
}

//for creating student's details

#include<stdio.h>

int main(){
    FILE *ptr;
    ptr = fopen("student.txt", "w");
    char name[100];
    int age;
    char university[100];
    float marks;

    printf("Enter your full name\n");
    gets(name);  
    
    printf("Enter your age\n");
    scanf("%d", &age);
    fflush(stdin);

    printf("Enter your University name\n");
    gets(university);

    printf("Enter your marks\n");
    scanf("%f", &marks);

    fprintf(ptr, "Your full name is - %s\n", name);
    fprintf(ptr, "Your age is - %d\n", age);
    fprintf(ptr, "Your university name is - %s\n", university);
    fprintf(ptr, "Your marks is - %f\n", marks);

    printf("We have added your full details into the new file\n");
    printf("Your full name - %s\n", name);
    printf("Your age - %d\n", age);
    printf("Your University name - %s\n", university);
    printf("Your marks - %f\n", marks);
    
    fclose(ptr);
    return 0;
}        

//for creating odd number

#include<stdio.h>

int main(){
    FILE *ptr;
    ptr = fopen("odd_number.txt", "w");
    int n;

    printf("Enter the number: ");
    scanf("%d", &n);

    for(int i = 1; i<=n; i++){
        if(i % 2 !=0){
            fprintf(ptr, "%d\n", i);
        }
    }

    fclose(ptr);
    return 0;
}

//sum two integers which are already added then overight them

#include <stdio.h>

int main()
{
    FILE *ptr;
    ptr = fopen("number.txt", "r");

    int a;
    fscanf(ptr, "%d", &a);

    int b;
    fscanf(ptr, "%d", &b);
    fclose(ptr);

    ptr = fopen("number.txt", "w");
    fprintf(ptr, "%d", a+b);
    fclose(ptr);
    return 0;
}

// use this code for generating a table in new file called table.txt 

#include <stdio.h>

int main()
{
    int num;
    FILE *ptr;
    printf("Enter the number you want table of\n");
    scanf("%d", &num);
    ptr = fopen("table.txt", "w");
    for(int i = 0; i<10; i++ ){
        fprintf(ptr, "%d x %d = %d\n", num, i+1, num*(i+1));
    }
    fclose(ptr);
    return 0;
}        

