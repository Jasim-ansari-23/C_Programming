//store a student 1 data using structure function

#include<stdio.h>
#include<string.h>

//user defined datatypes
struct student{
  int roll_number;
  float cgpa;
  char name[100];
};

int main(){
  struct student s1;
  s1.roll_number = 122;
  s1.cgpa = 9.5;
  //s1.name = "Jasim"
  strcpy(s1.name, "Jasim ansari");

  printf("Student name is: - %s\n", s1.name);
  printf("Student roll number is: - %d\n", s1.roll_number);
  printf("Student CGPA is: - %f\n", s1.cgpa);
  return 0;
}

//store the two students data 

#include<stdio.h>
#include<string.h>

//user defined datatypes
struct student{
  int roll_number;
  float cgpa;
  char name[100];
};

int main(){
  struct student s1;
  s1.roll_number = 122;
  s1.cgpa = 9.5;
  strcpy(s1.name, "Jasim ansari");

  printf("1st student details - %s\n", s1.name);

  printf("Student name is: - %s\n", s1.name);
  printf("Student roll number is: - %d\n", s1.roll_number);
  printf("Student CGPA is: - %f\n", s1.cgpa);

  struct student s2;
  s2.roll_number = 123;
  s2.cgpa = 9.1;
  strcpy(s2.name, "Visal Kumar");


  printf("2st student details - %s\n", s2.name);

  printf("Student name is: - %s\n", s2.name);
  printf("Student roll number is: - %d\n", s2.roll_number);
  printf("Student CGPA is: - %f\n", s2.cgpa);
  return 0;
}

//store the using an array

#include<stdio.h>
#include<string.h>

struct student{
  char name[100];
  int roll_number;
  float cgpa;
};

int main(){
  struct student cps[100];
  cps[0].roll_number = 103;
  cps[0].cgpa = 9.0;
  strcpy(cps[0].name, "Vishal kumar");

  printf("Name: %s\n", cps[0].name);
  printf("Roll number: %d\n", cps[0].roll_number);
  printf("CGPA: %f\n", cps[0].cgpa);
  return 0;
}

#include<stdio.h>
#include<string.h>

struct employe{
  char name[100];
  char work_name[100];
  float salary;
  char positon[100];
};

int main(){
  struct employe sofenr[10];
  strcpy(sofenr[0].name, "Jasim ansari");
  strcpy(sofenr[0].work_name, "Software engineer");
  sofenr[0].salary = 100000.0;
  strcpy(sofenr[0].positon, "Senior");

  printf("%s Employe detailes\n", sofenr[0].name);

  printf("Name: %s\n", sofenr[0].name);
  printf("Work Name: %s\n", sofenr[0].work_name);
  printf("Salary: %f\n", sofenr[0].salary);
  printf("Job Positon: %s\n", sofenr[0].positon);

  return 0;
}

//intialize structure in one line

#include<stdio.h>
#include<string.h>

struct student{
  char name[100];
  int roll_number;
  float cgpa;
};

int main(){
  struct student s1 = {"Jasim ansari", 102, 9.8};
  printf("Student name = %s\n", s1.name);
  printf("Student roll number = %d\n", s1.roll_number);
  printf("Student CGPA = %f\n", s1.cgpa);
  return 0;
}

//printing the name using pointer

#include<stdio.h>
#include<string.h>

struct employe{
  char name[100];
  char work_name[100];
  float salary;
  char positon[100];
};

int main(){
  struct employe s1 = {"Jasim ansari", "Software engineer", 100000.0, "Senior"}; 
  struct employe *ptr = &s1;

  printf("Name: %s\n", (*ptr).name);
  printf("Work Name: %s\n", (*ptr).work_name);
  printf("Salary: %f\n", (*ptr).salary);
  printf("Positon: %s\n", (*ptr).positon);

  return 0;
}

//printing the struct using arrow operator (->) with pointer keep in mind you can only assign using pointer.

#include<stdio.h>
#include<string.h>

struct employe{
  char name[100];
  char work_name[100];
  float salary;
  char positon[100];
};

int main(){
  struct employe s1 = {"Jasim ansari", "Software engineer", 100000.0, "Senior"}; 
  struct employe *ptr = &s1;

  printf("Name: %s\n", ptr->name);
  printf("Work Name: %s\n", ptr->work_name);
  printf("Salary: %f\n", ptr->salary);
  printf("Positon: %s\n", ptr->positon);

  return 0;
}

//passing structure using function
//if we want change something so we can only in main function not outside

#include <stdio.h>
#include <string.h>

struct employe
{
  char name[100];
  char work_name[100];
  float salary;
  char positon[100];
};

void employes(struct employe s1);

int main()
{
  struct employe s1 = {"Jasim ansari", "Software engineer", 100000.0, "Senior"};
  employes(s1);
  s1.salary = 150000.0;

  return 0;
}

void employes(struct employe s1)
{
  printf("Name: %s\n", s1.name);
  printf("Work Name: %s\n", s1.work_name);
  printf("Salary: %f\n", s1.salary);
  printf("Positon: %s\n", s1.positon);
}

//