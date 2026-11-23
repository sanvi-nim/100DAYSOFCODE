//check if one string is a rotation of another
#include <stdio.h>
#include <string.h>

int main()
{
    char str1[100], str2[100], temp[200];
    int len1, len2;

    printf("Enter first string: ");
    scanf("%99s", str1);

    printf("Enter second string: ");
    scanf("%99s", str2);

    len1 = strlen(str1);
    len2 = strlen(str2);

    if(len1 != len2)
    {
        printf("Strings are not rotations");
    }
    else
    {
        strcpy(temp, str1);
        strcat(temp, str1);

        if(strstr(temp, str2) != NULL)
        {
            printf("Strings are rotations");
        }
        else
        {
            printf("Strings are not rotations");
        }
    }

    return 0;
}