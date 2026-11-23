//reverse each word in a sentence without changing the word order
#include <stdio.h>

int main()
{
    char str[200], temp;
    int i, j, start = 0;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    for(i = 0; ; i++)
    {
        if(str[i] == ' ' || str[i] == '\0'
           || str[i] == '\n')
        {
            j = i - 1;

            while(start < j)
            {
                temp = str[start];
                str[start] = str[j];
                str[j] = temp;

                start++;
                j--;
            }

            start = i + 1;
        }

        if(str[i] == '\0' || str[i] == '\n')
            break;
    }

    printf("Sentence after reversing each word: %s", str);

    return 0;
}
