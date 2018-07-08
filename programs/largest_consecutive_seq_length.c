#include <stdio.h>
#include <stdlib.h>
int ConsecutiveSequenceLength(int *array, int length)
{
    if(array == NULL)
        return 0;
    int result=1;
    int seqLength = 1;
    for(int i = 0 ; i < length-1 ; i++)
    {
        if(array[i+1] == array[i]+1)
        {
            seqLength++;
            if(i+1 == length - 1 && seqLength > result)
            {
                result = seqLength;
            }
            continue;
        }
        else
        {
            if(seqLength > result)
            {
                result = seqLength;
            }
            seqLength = 1;
        }
    }

    return result;
}

int main()
{
    int *array = NULL;
    int length = 0;

    printf("\nEnter count of elements :");
    scanf("%d", &length);
    array = (int*)malloc(length*sizeof(int));

    printf("\nEnter %d sorted elements:", length);
    for(int i = 0 ; i < length ; i++)
    {
        scanf("%d", &array[i]);
    }

    int resultLength = ConsecutiveSequenceLength(array, length);

    printf("\nLength of consecutive sequence is %d.", resultLength);
    return 0;
}
