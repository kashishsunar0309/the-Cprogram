#include <stdio.h>
int main()
{
    char name[] = "KASHISH IS HERO BROTHER";
    char simple[] = "HELLO World is first program language.";
    simple[1] = 'A';
    int i;
    for (i < 0; i <= 20; i++)
    {
        printf("%c.", simple[i]);
    }

    printf("%s, %s\n", name, simple);
    printf("%c ,%c\n", name[0], simple[0]);
    printf("%c ,%c\n", name[1], simple[1]);
    printf("%c ,%c\n", name[2], simple[2]);
    printf("%c ,%c\n", name[3], simple[3]);
    printf("%c ,%c\n", name[4], simple[04]);
    printf("%c ,%c\n", name[5], simple[5]);
    printf("%c ,%c\n", name[6], simple[6]);
    return 0;
}