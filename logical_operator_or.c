#include <stdio.h>
int main(int argc, char const *argv[])
{
    char ch;
    printf("Enter a letter: ");
    scanf("%c", &ch);

    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
    {
        printf("This is a vowel");
    }
    else
    {
        printf("This is a consonent");
    }

    return 0;
}
