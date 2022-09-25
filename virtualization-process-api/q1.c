#include <stdio.h>
#include <unistd.h>
int main()
{
   int x = 100;
   int pid = fork();
   if (pid == 0)
   {
      x = x + 1;
      printf("I'm the parent with pid=%d\n", pid);
      printf("my parent version of x=%d\n", x);
   }
   else
   {
      printf("I'm the child with pid=%d\n", pid);
      printf("my child version of x=%d\n", x);
   }
   return 0;
}
