#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    if(b != 0){
        if(a % b == 0){
            printf("%d is divisible by %d", a, b);
        }
        else{
            printf("%d is not divisible by %d", a, b);
        }
    }
    else{
        printf("You can not divide by 0");
    }

    return 0;
}
