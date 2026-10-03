#include <stdio.h>

void analyze(char *str, int *vowels, int *consonants,
             int *digits, int *spaces, int *special)
{
    int i = 0;

    while (str[i] != '\0')
    {
        if (str[i] == 'a' || str[i] == 'e' ||
            str[i] == 'i' || str[i] == 'o' ||
            str[i] == 'u' || str[i] == 'A' ||
            str[i] == 'E' || str[i] == 'I' ||
            str[i] == 'O' || str[i] == 'U')
        {
            (*vowels)++;
        }
        else if ((str[i] >= 'a' && str[i] <= 'z') ||
                 (str[i] >= 'A' && str[i] <= 'Z'))
        {
            (*consonants)++;
        }
        else if (str[i] >= '0' && str[i] <= '9')
        {
            (*digits)++;
        }
        else if (str[i] == ' ')
        {
            (*spaces)++;
        }
        else
        {
            (*special)++;
        }

        i++;
    }
}

int main()
{
    char str[100];

    int vowels = 0;
    int consonants = 0;
    int digits = 0;
    int spaces = 0;
    int special = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    analyze(str, &vowels, &consonants, &digits,
            &spaces, &special);

    printf("Vowels = %d\n", vowels);
    printf("Consonants = %d\n", consonants);
    printf("Digits = %d\n", digits);
    printf("Spaces = %d\n", spaces);
    printf("Special characters = %d\n", special);

    return 0;
}