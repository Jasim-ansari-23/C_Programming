#include <stdio.h>
int main()
{
    int marks[4];

    printf("Enter the 1st student marks: ");
    scanf("%d", &marks[0]);

    printf("Enter the 2nd student marks: ");
    scanf("%d", &marks[1]);

    printf("Enter the 3rd student marks: ");
    scanf("%d", &marks[2]);

    printf("Enter the 4th student marks: ");
    scanf("%d", &marks[3]);

    printf("Your students marks are %d", marks[0], marks[1], marks[2], marks[3]);
    return 0;
}

#include <stdio.h>
int main()
{
    int marks[5];
    
    for(int i = 0; i<5; i++){
        printf("Enter the value of the students %d: ", i+1);
        scanf("%d", &marks[i]);
    }
    
    for(int i = 0; i<5; i++){
        printf("The value of the students %d is %d\n", i+1, marks[i]);
    }
    return 0;
}

//array to function 

#include <stdio.h>
void printarray(int *ptr, int n){
    for(int i=0; i<n; i++){
        printf("The value of element %d id %\n", i+1, *(ptr+i));
    }
}

int main(){
    
    int arr[] = {1, 56, 45, 48, 49, 89, 44, 89};
    printarray("arr, 8");
    return 0;
}

#include <stdio.h>

int main()
{
    int marks[4];

    for(int i = 1; i<=4; i++){
        printf("Enter the %d student's marks here\n", i);
        scanf("%d", &marks[i]);
    }

    for(int i = 1; i<=4; i++){
        printf("The marks of students %d is %d\n", i, marks[i]);
    }
    return 0;
}

//Write a C program, to find both the largest and smallest number in a list of integers using an Array.

#include<stdio.h>
#include<conio.h>
#include<math.h>

void main(){
  int i, j, m, min, max, a[20];
  printf("Enter the no. of an array elements\n");
  scanf("%d", &i);
  printf("Enter the array of elements\n");
  for(m=0;m<i;m++){
    scanf("%d", &a[m]);
  }  
  max=a[0];
  min=a[10];
  for(j=1; j<i;j++){
    if(a[j]>max){
      max=a[j];
    }if(a[j]<min){
      min=a[j];
    }
    printf("The maximum number in the given array is: %d\n", max);
    printf("The minimum number in the given array is: %d\n", min);
    getch;
  }
}

//