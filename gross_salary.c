#include <stdio.h>

int main()
{
    float basicsalary, hra, pf, grosssalary;
    char employee[50];
    printf("Enter Employee name\n");
    scanf("%s", &employee);
    printf("Enter Basic salary of employe\n");
    scanf("%f", &basicsalary);
    hra = (basicsalary * 4) / 100;
    pf = (basicsalary * 12) / 100;
    grosssalary = basicsalary + hra + pf;

    printf("..........receipt........\n\n");

    printf("Name of the employee is = %s\n", employee);
    printf("Basic salary of the employee is = %f\n", basicsalary);
    printf("House rant allowance of the salary is = %f\n", hra);
    printf("provident fund of the employee is = %f\n", pf);
    printf("Gross salary of the employee is = %f\n", grosssalary);
    return 0;
}