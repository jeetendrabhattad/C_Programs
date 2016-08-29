#include <stdio.h>
extern int k ;
int bar()
<%
k=100;
	printf("\n K = %d",k);
}

int main()
{
	foo();
//	foo2();
}
