#include <stdio.h>
#include <conio.h>
int main()
{

    char word[3] = {'C', 'A', 'T'}; // Array name can't have underscore in middle like that
    printf("%c", word[0]);          // This prints just 'C'
    printf("%c", word[1]);          // This prints just 'A'
    printf("%c", word[2]);          // This prints just 'T'
    return 0;
}