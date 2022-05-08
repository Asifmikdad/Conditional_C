#include<stdio.h>
int main(int argc, char const *argv[])
{
    int num;
    scanf("%d", &num);

    if(num >= 0 && num <= 10){
        printf("Okay");
    }
    else{
        printf("Not okay");
    }
    return 0;
}
