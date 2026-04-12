#include <stdio.h>
#include <string.h>
struct myname
{
    char name[45];
    int age;
    char course[45];
};
int main()
{
    struct myname s1;
    strcpy(s1.course, "Bachelor of Information and technology.");
    strcpy(s1.name, "Kashish.");
    s1.age = 18;
    printf("%s\n%s\n%d\n", s1.name, s1.course, s1.age);
    return 0;
}