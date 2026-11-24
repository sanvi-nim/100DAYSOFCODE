//C Program to Convert a String into Sentence Case
#include <stdio.h>

int main()
{
    char str[200];
    int i, flag = 1;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for(i = 0; str[i] != '\0'; i++)
    {
        if(str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] = str[i] + 32;
        }

        if(flag == 1 && str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] = str[i] - 32;
            flag = 0;
        }

        if(str[i] == '.' || str[i] == '!' || str[i] == '?')
        {
            flag = 1;
        }
    }

    printf("Sentence case: %s", str);

    return 0;
}
