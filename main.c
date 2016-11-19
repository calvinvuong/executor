// Calvin Vuong & William Xiang
// MKS65 pd10
// Work 07
// 11-18-2016

#include "main.h"

int main() {

  printf("Command: ");
  char input[1000];
  fgets(input, sizeof(input), stdin);
  input[ strlen(input) - 1 ] = '\0'; // get rid of newline

  char * command[1000];
  char *s = input;

  // split the input by argument
  int i = 0;
  while ( s != NULL ) {
    command[i] = strsep(&s, " ");
    i++;
  }
  command[i] = NULL; // null terminate

  execvp( command[0], command );

  return 0;
}
