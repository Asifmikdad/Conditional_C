#include <stdio.h>
int main(int argc, char const *argv[])
{
    int num1, num2;
    char op;

    scanf("%d %c %d", &num1, &op, &num2);

    int result;

    switch (op)
    {
    case '+':
        printf("%d", num1 + num2);
        break;
    case '-':
        printf("%d", num1 - num2);
        break;
    case '*':
        printf("%d", num1 * num2);
        break;
    case '/':
        printf("%d", num1 / num2);
        break;
        default:
        printf("Error");
    }
    return 0;
}
