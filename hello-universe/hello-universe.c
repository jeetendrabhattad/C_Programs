/*
 * # - whatever given after it is a pre-processor directive
 * include - is a pre-processor directive. Content of specified header file is copied and pasted.
 * <> - header files present in standard include path should be included using this brackets.
 * "" - quotes should be used to include files present in current directory.
 *    - First filename is searched in standard include path, if not found then current directory is
 *    - searched.
 */
#include <stdio.h>

/*
 * @main :- Entry point function. Every self-executable program must contain main.
 *          Whenever program is loaded in memory, execution starts from main.
 *          Need of main:- Every programmer can write different function and want machine to run it from
                           that. But how machine will come to know from where to start? 
 */
//int is return type - default return type is int
int main(/*In C No arguments list means it can be invoked with any number of arguments*/)
{//start of scope of main
    //standard library function declared in stdio.h and defined in libc.so
	printf("Hello Universe\n");
    //informs caller with execution status, 0 stands for success
	return 0;
}//end of scope of main
