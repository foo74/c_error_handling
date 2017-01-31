#include <stdio.h>
#include <errno.h>

extern int errno;

int main()
{
   int i = 0;

   for (i=0; i<300; i++)
   { 
      errno = i;
      fprintf(stderr, "errno: %d - ", errno);
      perror("message");
      //fprintf(stderr, "\n");
   }
   
   return 0;
}
