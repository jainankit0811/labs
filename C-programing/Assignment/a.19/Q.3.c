#include <stdio.h>

<<<<<<< HEAD
int main()
{
    int n[10], smallest, a;
=======
void ascending();

void descending();

int n[10], r, move = 0;

int main()
{
>>>>>>> a457e8bd50c3dabd31de5ab458f29d19f7e8222f

    for (int i = 0; i < 10; i++)
    {
        printf("Enter number - ");
        scanf("%d", &n[i]);
    }
    int r, move = 0;
<<<<<<< HEAD
=======
    ascending();

    descending();

    return 0;
}
void ascending()
{

>>>>>>> a457e8bd50c3dabd31de5ab458f29d19f7e8222f
    for (int i = 0; i < 10; i++)
    {
        for (int j = i; j < 10; j++)
        {
            if (n[i] > n[j])
            {
                move = n[i];
                n[i] = n[j];
                n[j] = move;
            }
        }
    }

    for (int i = 0; i < 10; i++)
    {
        printf("ascending %d \n", n[i]);
    }
<<<<<<< HEAD

=======
}
void descending()
{
>>>>>>> a457e8bd50c3dabd31de5ab458f29d19f7e8222f
    for (int i = 0; i < 10; i++)
    {
        for (int j = i; j < 10; j++)
        {
            if (n[i] < n[j])
            {
                move = n[i];
                n[i] = n[j];
                n[j] = move;
            }
        }
    }

    for (int i = 0; i < 10; i++)
    {
        printf("descending %d \n", n[i]);
    }
<<<<<<< HEAD

    return 0;
=======
>>>>>>> a457e8bd50c3dabd31de5ab458f29d19f7e8222f
}