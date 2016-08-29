#include <stdio.h>
#include <fcntl.h>

int main()
{
    FILE *fp;
    fp = fopen("test.txt", "r");
    if(fp)
    {
        char buff[60];
        fread(buff, 20, 1, fp);
        printf("%s", buff);
    }
    fclose(fp);
    return 0;
}

