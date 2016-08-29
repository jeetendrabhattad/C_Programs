#include <unistd.h>
#include <string.h>

int main()
{
#if 1
	char buffer[80];
	memset(buffer, 0, 80);
	read(0, buffer, 80);
	write(1, buffer, 80);
#endif
	write(1, "Hello Universe\n", 16);
	return 0;
}
