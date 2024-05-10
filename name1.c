#include <stdio.h>
#include "src/header.h"

/**
 * Start
 */
int main(int argc, char* argv[]){
  for (int i=0;i<argc;i++)
    printf("%s ", argv[i]);
  puts("");
  repl();
  return 0;
}

