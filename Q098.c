//print initials of a name with the surname displayed in full
#include <stdio.h>

int main()
{
    char name[100];
    int i, last = 0;

    printf("Enter full name: ");
    fgets(name, sizeof(name), stdin);

    for(i = 0; name[i] != '\0'; i++)
    {
        if(name[i] == ' ' && name[i+1] != ' '
           && name[i+1] != '\n'
           && name[i+1] != '\0')
        {
            last = i + 1;
        }
    }

    printf("Name with initials: ");

    if(last == 0)
    {
        printf("%s", name);
    }
    else
    {
        for(i = 0; i < last; i++)
        {
            if(name[i] != ' ' &&
               (i == 0 || name[i-1] == ' '))
            {
                if(name[i] >= 'a' && name[i] <= 'z')
                    printf("%c. ", name[i] - 32);
                else
                    printf("%c. ", name[i]);
            }
        }

        for(i = last; name[i] != '\0'; i++)
        {
            printf("%c", name[i]);
        }
    }

    return 0;
}