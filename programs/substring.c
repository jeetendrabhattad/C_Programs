#include <stdio.h>

int is_substring(char str1[], char str2[])
{
    int len_str1 = 0, len_str2 = 0;
    while(str1[++len_str1]);
    while(str2[++len_str2]);
    printf("\nlen1 = %d, len2 = %d", len_str1, len_str2);
    if(len_str2 > len_str1)
        return 0;
    for(int i = 0 ; i < len_str1 ; i++)
    {
        int j = 0;
        printf("\ni = %d", i);
        while((j < len_str2 && i < len_str1)
                    && str1[i] == str2[j])
        {
            printf("\ni = %c, j = %c", str1[i], str2[j]);
            i++;
            j++;
        }
        if(j == len_str2)
            return 1;
        else if(j > 0)
        {
            i--;
        }
    }
    return 0;
}
int main()
{
    char str1[20], str2[20];

    printf("\nEnter 2 strings:");
    scanf("%s%s", str1, str2);

    printf("\nYou entered : %s, %s", str1, str2);

    if(is_substring(str1, str2))
    {
        printf("\n%s is substring of %s", str2, str1);
    }
    else
        printf("\n%s is not substring of %s", str2, str1);

}
