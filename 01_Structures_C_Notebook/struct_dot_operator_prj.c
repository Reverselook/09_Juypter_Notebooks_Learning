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

  EMPLOYEE_STRUCTURE employee = { 0 }; // initialize all elements of struct to zero

  //Initializing directly through the dot operator

  employee.ID  = 1470;   // initialize the ID element
  employee.Age = 34;     // initialize the Age element

  // Printing elements within a structure with the dot operator
  printf("The Employee ID is: %d\n", employee.ID);
  printf("The Employee Age is: %d\n", employee.Age);

  return 0;

}
