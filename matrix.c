#include <stdio.h>

int main()
{
    int mat[2][2], i, j;
    printf("Enter matrix elements\n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            scanf("%d", &mat[i][j]);
        }
    }

    printf("Matrix elements\n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("%d", mat[i][j]);
        }
        printf("\n");
    }

    return 0;
}

//matrix multiplication 

#include<stdio.h>
#include<stdlib.h>

int main(){
  int m, n, sum = 0, i, j, a[3][4], b[4][2], result[3][2];
  for(i = 0; i<3; i++){
    for(j = 0; j<4; j++){
      printf("Enter the %d %d elements of first matrix\n", i, j);
      scanf("%d", &a[i][j]);
    }
  }
  
  for(i = 0; i<4; i++){
    for(j = 0; j<2; j++){
      printf("Enter the %d %d elements of first matrix\n", i, j);
      scanf("%d", &b[i][j]);
    }
  }
  return 0;
}