#include <stdio.h>
int main()
{
    int i;
    for (i = 0; i <= 6; i++)
    {
        if (i == 5)
            // break;
            continue;
        printf("%d\n", i);
    }
    return 0;
}