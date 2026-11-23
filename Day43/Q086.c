//check if a string is palindrome
#include <stdio.h>

int main()
{
    char str[100];
    int i, j, len = 0, flag = 1;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for(i = 0; str[i] != '\0' && str[i] != '\n'; i++)
    {
        len++;
    }

    for(i = 0, j = len - 1; i < j; i++, j--)
    {
        if(str[i] != str[j])
        {
            flag = 0;
            break;
        }
    }

    if(flag == 1)
    {
        printf("String is a palindrome");
    }
    else
    {
        printf("String is not a palindrome");
    }

    return 0;
}
