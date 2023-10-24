//know veriable size

#include<stdio.h>

int main(){
    printf("%d\n", sizeof(int));
    printf("%d\n", sizeof(float));
    printf("%d\n", sizeof(char));
    return 0;
}

//using malloc for adding appropriete integer size
//malloc function

#include<stdio.h>
#include<stdlib.h>

int main(){
    float *ptr;
    ptr = (float *) malloc(5 * sizeof(float));

    ptr[0] = 9;
    ptr[1] = 8;
    ptr[2] = 4;
    ptr[3] = 3;
    ptr[4] = 5;

    for(int i = 0; i<5; i++){
        printf("%f\n", ptr[i]);
    }
    return 0;
}

//integer

#include<stdio.h>
#include<stdlib.h>

int main(){
    int *ptr;
    ptr = (int *) malloc(5 * sizeof(int));

    ptr[0] = 9;
    ptr[1] = 8;
    ptr[2] = 4;
    ptr[3] = 3;
    ptr[4] = 5;

    for(int i = 0; i<5; i++){
        printf("%d\n", ptr[i]);
    }
    return 0;
}

//calloc function
//use calloc for printing 100% (0)

#include<stdio.h>
#include<stdlib.h>

int main(){
    int *ptr;
    ptr = (int *) calloc(5, sizeof(int));

    ptr[0] = 9;
    ptr[1] = 8;
    ptr[2] = 4;
    ptr[3] = 3;
    ptr[4] = 5;

    for(int i = 0; i<5; i++){
        printf("%d\n", ptr[i]);
    }
    return 0;
}

//declearing the size by user's input

#include<stdio.h>
#include<stdlib.h>

int main(){
    int *ptr;
    int n;
    ptr = (int *) calloc(5, sizeof(int));

    printf("Enter the n: ");
    scanf("%d", &n);

    for(int i = 0; i<n; i++){
        printf("%d\n", ptr[i]);
    }
    return 0;
}

//

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr;

    ptr = (int *)calloc(5, sizeof(int));

    printf("Enter the n(5): ");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &ptr[i]);
    }

    ptr = realloc(ptr, 8);
    printf("Enter the n(8): ");
    for (int i = 0; i < 8; i++)
    {
        scanf("%d", &ptr[i]);
    }

    for(int i=0; i<8; i++){
    printf("%d = %d\n", i, ptr[i]);
    }
    return 0;
}

//even or odd number

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr;
    ptr = (int *)calloc(5, sizeof(int));

    printf("odd number\n");
    ptr[0] = 1;
    ptr[1] = 3;
    ptr[2] = 5;
    ptr[3] = 7;
    ptr[4] = 9;

    for (int i = 0; i < 5; i++)
    {
        printf("%d\n", ptr[i]);
    }

    ptr = realloc(ptr, 6);
    printf("even number\n");

    ptr[0] = 2;
    ptr[1] = 4;
    ptr[2] = 6;
    ptr[3] = 8;
    ptr[4] = 10;
    ptr[5] = 12;

    for (int i = 0; i < 6; i++)
    {
        printf("%d\n", ptr[i]);
    }
    return 0;
}

//#include<stdio.h>
#include<stdlib.h>

int main(){
  int *ptr;
  ptr = (int *)calloc(5, sizeof(int));

  ptr[0] = 45;
  ptr[1] = 457;
  ptr[2] = 485;
  ptr[3] = 95;
  ptr[4] = 85;

  for(int i = 0; i<5; i++){
      printf("%d\n", ptr[i]);
  }

  realloc(ptr, 10);
  ptr[0] = 7;
  ptr[1] = 2;
  ptr[2] = 9;
  ptr[3] = 2;
  ptr[4] = 9;
  ptr[5] = 4;
  ptr[6] = 6;
  ptr[7] = 5;
  ptr[8] = 2;
  ptr[9] = 1;

  for(int j = 0; j<10; j++){
    printf("%d\n", ptr[j]);
  }
  return 0;
}