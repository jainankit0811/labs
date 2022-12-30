#include <stdio.h>

int main()
{
    int n, m, f, i, c;
    printf("Enter the distance in a km. -");
    scanf("%d", &n);
    m = n * 1000;
    f = n * 3280.84;
    i = n * 39370.1;
    c = n * 1000 * 100;

    printf("%d  %d  %d  %d  ", m, f, i, c);

    return 0;
}