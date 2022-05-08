#include<stdio.h>
int main(int argc, char const *argv[])
{
    int marks;
    printf("Enter your marks: ");
    scanf("%d", &marks);

    if (marks >= 40){
        printf("You have passed");

    }
    else{ 
        printf("You have failed");
    }
    return 0;
}
// relational operators 
// <, >, <=, >=, ==, !=