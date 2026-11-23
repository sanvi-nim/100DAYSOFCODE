//reverse a string
#include <stdio.h>

int main()
{
    char str[100], temp;
    int i, j, len = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for(i = 0; str[i] != '\0' && str[i] != '\n'; i++)
    {
        len++;
    }

    for(i = 0, j = len - 1; i < j; i++, j--)
    {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }

    printf("Reversed string = %s", str);

    return 0;
}
