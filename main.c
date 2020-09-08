// Author: Lucas Sun lks5713@psu.edu
// Collaborator: Yuxuan Fan ypf5053@psu.edu
// Collaborator: Varun Patel vkp5116@psu.edu
// Section: 2
// Breakout: 10
#include <stdio.h>
#include <readline/readline.h>
#include <stdlib.h>

int main(void) {
  char *str= readline("Enter your CMPSC 131 grade: ");
  double num = atof(str); 

  if(num>=93.0){
    printf("Your letter grade for CMPSC 131 is A.\n");
  }
  else if(num>=90.0){
    printf("Your letter grade for CMPSC 131 is A-.\n");
  }
  else if(num>=87.0){
    printf("Your letter grade for CMPSC 131 is B+.\n");
  }
  else if(num>=83.0){
    printf("Your letter grade for CMPSC 131 is B.\n");
  }
  else if(num>=80.0){
    printf("Your letter grade for CMPSC 131 is B-.\n");
  }
  else if(num>=77.0){
    printf("Your letter grade for CMPSC 131 is C-.\n");
  }
  else if(num>=70.0){
    printf("Your letter grade for CMPSC 131 is C.\n");
  }
  else if(num>=60.0){
    printf("Your letter grade for CMPSC 131 is D.\n");
  }
  else{
    printf("Your letter grade for CMPSC 131 is F.\n");
  }
  
  return 0;
}