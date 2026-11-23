// to Find the Length of the Longest Substring Without Repeating Characters
#include <stdio.h>

int main()
{
    char s[100];
    int i, j, k, len = 0;
    int count, max = 0;

    printf("Enter a string: ");
    scanf("%99s", s);

    for(i = 0; s[i] != '\0'; i++)
    {
        count = 0;

        for(j = i; s[j] != '\0'; j++)
        {
            for(k = i; k < j; k++)
            {
                if(s[j] == s[k])
                    break;
            }

            if(k < j)
                break;

            count++;
        }

        if(count > max)
        {
            max = count;
        }
    }

    printf("%d", max);

    return 0;
}