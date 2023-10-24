#include <stdio.h>

int main()
{
  int operand1, operand2, result;
  char operator;

  printf("Enter the 1st intiger\n");
  scanf("%d", &operand1);

  printf("Enter the 2nd integer\n");
  scanf("%d", &operand2);

  printf("Enter an operator (+, -, *, /, or %%): ");
  scanf(" %c", &operator);

  switch (operator)
  {
  case '+':
    result = operand1 + operand2;
    printf("%d + %d = %d\n", operand1, operand2, result);
    break;
  case '-':
    result = operand1 - operand2;
    printf("%d - %d = %d\n", operand1, operand2, result);
    break;
  case '*':
    result = operand1 * operand2;
    printf("%d * %d = %d\n", operand1, operand2, result);
    break;
  case '/':
    if (operand2 == 0)
    {
      printf("Error: division by zero\n");
    }
    else
    {
      result = operand1 / operand2;
      printf("%d / %d = %d\n", operand1, operand2, result);
    }
    break;
  case '%':
    if (operand2 == 0)
    {
      printf("Error: division by zero\n");
    }
    else
    {
      result = operand1 % operand2;
      printf("%d %% %d = %d\n", operand1, operand2, result);
    }
    break;
  default:
    printf("Error: invalid operator\n");
  }
  return 0;
}

#include<stdio.h>
#include<string.h>

int main(){
    int a, b, result;
    char operator;
    printf("Enter the 1st integer\n");
    scanf("%d", &a);
    fflush(stdin);
    printf("Enter the operator(+ , -, *, /, or %%): ");
    scanf("%c", &operator);
    printf("Enter the 2nd integer\n");
    scanf("%d", &b);
    switch (operator){
        case'+':
        result = a + b;
        printf("%d + %d = %d\n", a, b, result);
        break;
        case'-':
        result = a - b;
        printf("%d - %d = %d\n", a, b, result);
        break;
        case'*':
        result = a * b;
        printf("%d * %d = %d\n", a, b, result);
        break;
        case'/':
        if(b == 0){
            printf("Error: division by zero\n");
        }else{
            result = a / b;
            printf("%d / %d = %d\n", a, b, result);
        }
        break;
        case'%':
        if(b == 0){
            printf("Error: division by zero\n");
        }else{
            result = a % b;
            printf("%d %% %d = %d\n", a, b, result);
    }
    break;
    default:
    printf("Entered wrong operator\n");
}
    return 0;
}