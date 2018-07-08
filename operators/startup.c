#include<stdio.h>
 
/* Apply the constructor attribute to myStartupFun() so that it
    is executed before main() */
//void myStartupFun (void) __attribute__ ((constructor));
 
 
/* Apply the destructor attribute to myCleanupFun() so that it
   is executed after main() */
void myCleanupFun (void) __attribute__ ((destructor));
 
 
/* implementation of myStartupFun */
__attribute__((constructor)) void myStartupFun (void)
{
    printf ("startup code before main()\n");
	myStartupFun1();
	for(;;) return;
}
__attribute__((constructor)) void myStartupFun1 (void)
{
    printf ("startup code before main()1111\n");
}
 
/* implementation of myCleanupFun */
void myCleanupFun (void)
{
    printf ("cleanup code after main()\n");
}
 
int main (void)
{
    printf ("hello\n");
    return 0;
}


