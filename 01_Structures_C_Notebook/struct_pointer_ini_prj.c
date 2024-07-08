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

  //employeepointer is a pointer to the 'employee' structure
  PEMPLOYEE_STRUCTURE employeepointer = &employee;

  // Printing members within a structure with the pointer
  printf("The Employee ID is: %d\n", employee.ID);
  printf("The Employee Age is: %d\n", employee.Age);

  //Update the the Age member
  employeepointer->Age = 22;

  // Printing changed member
  printf("The Employee ID is: %d\n", employee.ID);
  printf("The new Employee Age is now: %d\n", employeepointer->Age);

  return 0;

}
