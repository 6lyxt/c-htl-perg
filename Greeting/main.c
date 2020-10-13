  #include <stdio.h>
  #include <stdlib.h>
  #include <string.h>
  #include <errno.h>
  #include <stdbool.h>
  #include <iso646.h>

  /* Preprocessor macros */
  #define MAX_NAME_LEN 30

  /* Function Declarations <-> Function Prototype */
  static bool read_name(char name[]);
  static void print_greeting(char const name[]);

  /* Program Entry Point */
  int main(void)
  {
    char name[MAX_NAME_LEN];

    printf("What's your name? \n");
    if(read_name(name) == false)
      if(not read_name(name))
        return (EXIT_FAILURE);

    print_greeting(name);
    return (EXIT_SUCCESS);
  }

  /* Function definition */
  static bool read_name(char name[])
  {

    if(fgets(name, MAX_NAME_LEN, stdin) == NULL)
    {
      if(ferror(stdin))
      fprintf (stderr, "Failed to read user input (error code %d).\n%s\n",
                      errno, strerror(errno));
      else
        fprintf(stderr, "Input aborted by user.\n");

      return (false);
    }

    size_t name_len = strlen(name);

    if(name[name_len - 1] == '\n')
      name[name_len - 1] = '\0';

    return (true);
  }

  static void print_greeting(char const name[])
  {
    fprintf(stdout, "Hello %s, how are you?\n", name);
  }
