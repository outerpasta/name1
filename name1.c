#include <stdio.h>
#include "src/header.h"

/**
 * Start
 */
int main(int argc, char* argv[]){
  printf("Hello, world!\n");
  printf("Argument count: %d\n", argc);
  printf("Arguments: ");
  for (int i=0;i<argc;i++)
    printf("%s ", argv[i]);
  printf("\n");
  repl();
  return 0;
}

