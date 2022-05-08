#include<stdio.h>
int main(int argc, char const *argv[])
{
    int age;

    printf("Enter your age: ");
    scanf("%d", &age);

    (age >= 18)? 
    printf("You can vote") : printf("You can not vote");
    return 0;
}
