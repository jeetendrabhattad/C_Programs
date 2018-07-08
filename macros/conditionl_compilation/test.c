#include <stdio.h>

int main()
{
#ifdef C
    printf("Studying C\n");
#elif DS
    printf("Studying DS\n");
#else
    printf("Watching Final Ind v/s Australia\n");
#endif
    return 0;
}
