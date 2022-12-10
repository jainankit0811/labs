#include <stdio.h>
void fun();
static int g;

int main()
{
    g = 20;

    printf("g inside main %d", g);
    fun();

    return 0;
}
void fun()
{
    int j = 10;
    g++;
    printf("j is %d g is %d", j, g);
}
