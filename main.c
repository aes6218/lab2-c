// Author: August Sanderson aes6218@psu.edu
// Collaborator: Dymea Schippers dxs5940@psu.edu
// Collaborator: Jonathan Ahn jxa5570@psu.edu
// Collaborator: Ronit Ramnarayan rvr5507@psu.edu
// Collaborator: Nicholas Glaz nsg5204@psu.edu
// Section: 11
// Breakout: 2

#include <stdio.h>
#include <stdlib.h>
#include <readline/readline.h>

int main(void) {
  char *g = readline("Enter your CMPSC 131 grade: ");
  double grade = atof(g);
  if (grade >= 93.0)
  {
    printf("Your letter grade for CMPSC 131 is A.\n");
  }
  else if (grade >= 90.0)
  {
    printf("Your letter grade for CMPSC 131 is A-.\n");
  }
  else if (grade >= 87.0)
  {
    printf("Your letter grade for CMPSC 131 is B+.\n");
  }
  else if (grade >= 83.0)
  {
    printf("Your letter grade for CMPSC 131 is B.\n");
  }
  else if (grade >= 80.0)
  {
    printf("Your letter grade for CMPSC 131 is B-.\n");
  }
  else if (grade >= 77.0)
  {
    printf("Your letter grade for CMPSC 131 is C+.\n");
  }
  else if (grade >= 70.0)
  {
    printf("Your letter grade for CMPSC 131 is C.\n");
  }
  else if (grade >= 60.0)
  {
    printf("Your letter grade for CMPSC 131 is D.\n");
  }
  else if (grade < 60.0)
  {
    printf("Your letter grade for CMPSC 131 is F.\n");
  }
  return 0;
}