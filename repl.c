#include <stdio.h>
#include <readline/readline.h>
#include <readline/history.h>
#include "header.h"

/**
 * READ EVALUATE PRINT LOOP
 */
void repl(void) {
  char *inpt;
  int i = 0;
  while ( i < 10 ) {
    inpt = readline("user> ");
    if (!inpt) return;
    add_history(inpt);
    ++i;
    
    if (strcmp(inpt, "quit") == 0 || strcmp(inpt, "exit") == 0) {
      break;
    } else if (strcmp(inpt, "open") == 0) {
      openDocument();
    } else if (strcmp(inpt, "window") == 0 || strcmp(inpt, "win") == 0) {
      window();
    } else if (!strcmp(inpt, "") == 0) {
      printf("%s\n", inpt);
    }
  }
}
