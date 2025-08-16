#include <stdio.h>
int main() {
    int a, b;
    printf("Enter dividend and divisor: ");
    scanf("%d %d", &a, &b);
    if(b != 0)
        printf("Quotient = %d\n", a / b);
    else
        printf("Division by zero not allowed\n");
    return 0;
}
