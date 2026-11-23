//find the longest word in a sentence
#include <stdio.h>

int main()
{
    char str[200], longest[200];
    int i, j, len = 0, max = 0, start = 0;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    for(i = 0; ; i++)
    {
        if(str[i] != ' ' && str[i] != '\0'
           && str[i] != '\n')
        {
            len++;
        }
        else
        {
            if(len > max)
            {
                max = len;

                for(j = 0; j < len; j++)
                {
                    longest[j] = str[start + j];
                }

                longest[j] = '\0';
            }

            len = 0;
            start = i + 1;
        }

        if(str[i] == '\0' || str[i] == '\n')
            break;
    }

    if(max > 0)
        printf("Longest word = %s\n", longest);
    else
        printf("No word found\n");

    printf("Length = %d", max);

    return 0;
}