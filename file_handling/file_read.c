#include <stdio.h>
#include <stdlib.h>
int main ()
{
  FILE *fptr;
  char filename[15];
  char ch;
  printf ("Enter the filename to be opened \n");
  scanf ("%s", filename);

  fptr = fopen (filename, "r");

  if (fptr == NULL)
    {
      printf ("Cannot open file \n");
      exit (0);
    }

  ch = fgetc (fptr);
  while (ch != EOF)
    {
      printf ("%c", ch);
      ch = fgetc (fptr);
    }
  fclose (fptr);
  return 0;
}
