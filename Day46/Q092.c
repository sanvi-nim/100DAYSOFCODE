//find the first repeating lowercase alphabet in a string
#include <stdio.h>

int main()
{
    char str[100];
    int i, j, flag = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for(i = 0; str[i] != '\0'; i++)
    {
        if(str[i] >= 'a' && str[i] <= 'z')
        {
            for(j = i + 1; str[j] != '\0'; j++)
            {
                if(str[i] == str[j])
                {
                    printf("First repeating alphabet = %c", str[i]);
                    flag = 1;
                    break;
                }
            }
        }

        if(flag == 1)
            break;
    }

    if(flag == 0)
    {
        printf("No repeating lowercase alphabet found");
    }

    return 0;
}
