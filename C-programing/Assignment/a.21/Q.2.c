#include <stdio.h>

int main()
{
    char a[] = {"Hello"};
    char b[] = {"World"};
    printf("%s\n", a);
    printf("%s\n", b);
    printf("%u\n", a);
    printf("%u\n", b);
    printf("%ld\n", sizeof a);
    printf("%ld\n", sizeof b);
    printf("%c\n", a);
    printf("%c\n", b);

    printf("\n\n");

    if (a != b)
    {
        printf("%s %s Strings are not equal.", a, b);
    }
    else
    {
        printf("%s %s Strings are equal.", a, b);
    }

    return 0;
}