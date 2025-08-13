#include<stdio.h>
int main()
{
    char name[58];
    int age;
    printf("Enter your name:");
    scanf("%s", name);

    printf("Enter your age:");
    scanf("%d", &age );
    
    printf("%s and %d", name ,age);
    return 0;
}
