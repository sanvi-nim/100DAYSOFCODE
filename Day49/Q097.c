//print the initials of a name
#include <stdio.h>

int main()
{
    char name[100];
    int i;

    printf("Enter your full name: ");
    fgets(name, sizeof(name), stdin);

    printf("Initials: ");

    for(i = 0; name[i] != '\0'; i++)
    {
        if(i == 0 || (name[i-1] == ' ' && name[i] != ' '))
        {
            if(name[i] >= 'a' && name[i] <= 'z')
                printf("%c.", name[i] - 32);
            else
                printf("%c.", name[i]);
        }
    }

    return 0;
}
