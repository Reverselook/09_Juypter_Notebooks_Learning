#include <stdio.h>

//Structure Declaration
typedef struct _EMPLOYEE_STRUCTURE {
  int ID;
  int Age;
} EMPLOYEE_STRUCTURE, *PEMPLOYEE_STRUCTURE;

//Main
int main(){
  // Initializing Employee Structure
  // Note: employee is a variable declare with type EMPLOYEE_STRUCTURE

  EMPLOYEE_STRUCTURE employee = { .ID = 1455, .Age = 33 }; // initialize the ID and Age members

  // Printing members within a structure with the designated initializer syntax
  printf("The Employee ID is: %d\n", employee.ID);
  printf("The Employee Age is: %d\n", employee.Age);

  return 0;

}
