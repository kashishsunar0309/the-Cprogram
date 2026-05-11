#include <stdio.h>
#include <string.h>
struct School
{
    char location[35];
    float time;
    int rank;
};
int main()
{
    struct School school1 = {"Surkhet", 7.30, 20};
    printf("Location: %s\n", school1.location);
    printf("Time: %.3f\n", school1.time);
    printf("Rank: %d\n", school1.location);
    return 0;
}