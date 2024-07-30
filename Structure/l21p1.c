#include <stdio.h>
struct student
{
    int roll;
    char name[20];
    float mark;
} s;
void main()
{
    printf("Enter Roll:");
    scanf("%d", &s.roll);
    printf("Enter name:");
    scanf("%s", s.name);
    printf("Enter marks:");
    scanf("%f", &s.mark);
    printf("Roll:%d\nName:%s\nMarks:%0.2f\n", s.roll, s.name, s.mark);
}
