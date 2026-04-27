#include <stdio.h>
#include <string.h> // Needed for strlen()

int main()
{
    char carName[] = "volvo";
    int length = strlen(carName); // Correct way to get string length
    int i;

    for (i = 0; i < length; ++i)
    {
        printf("%c\n", carName[i]);
    }
    return 0;
}
