#include <stdio.h>
#include <stdlib.h>

#include <editline/readline.h>
#include <editline/history.h>

/* Declare a buffer for user input of size 2048 */
static char input[2048];

int main(int argc, char** argv)

{

    /* Print Version and Exit Information */
    puts("Lispy Version 0.0.0.0.1");
    puts("Press Ctrl+c to Exit\n");

    /* In a never ending loop */
    while (1) {

    /* Output our prompt */
    char* input = readline("lispy> ");

    /* Read a line of user input of maximum size 2048 */
    add_history(input);

    /* Echo input back to user */
    printf("No you're a %s\n", input);

    free(input);
  }

  return 0;
}