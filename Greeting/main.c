#include <stdio.h>

//int main(int argc, char *argv [])

char name[30];

static void read_name(void)
{

#if 0
  /*scanf("%s", &name[0]);*/
  fscanf(stdin, "%s", &name[0]); // & = speicheradresse von 'name[0]'
#endif
}

static void print_greeting(void)
{
  // %s = string / %d = ganze zahl, usw..
  fprintf(stdout, "Hello %s, how are you!\n", name);
}

/*
*
* Anmerkung: im Zuge des Applikationsstarts öffnet das Betriebssystem
*   für jedes Programm automatisch 3 (logische) Dateien, die wie folgt
*   mit konkreter Gerätehardware verbunden gedacht sind:
*
*
*                    Dateidiskriptor
*  Log. Datei      (file descriptor, "fd")            Java
*  stdin ("standard input") fd 0                    System.in
*  stout ("standard output") fd 1                   System.out
*  stderr ("standard error") fd 2                   System.err
*
*
*/

int main(void)
{

  printf("What's your name? ");

  return 0;
}

