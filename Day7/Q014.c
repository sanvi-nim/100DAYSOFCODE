//To input a character and check whether it is a vowel or consonant using if else
#include <stdio.h>

int main() {
    char c;
    printf("Enter a character ");
    scanf("%c", &c);
    if(c=='A'|| c=='E'|| c=='I'|| c=='U'||c=='O'||c=='a'||c=='e'||c=='i'||c=='o'||c=='u')
    printf("Vowel");
    else
    printf("Consonant");
    return 0;

}
