#include <stdio.h>
#include <math.h>
int main() {
    int n, rem, orig, result = 0, digits = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    orig = n;
    while(n != 0) {
        n /= 10;
        digits++;
    }
    n = orig;
    while(n != 0) {
        rem = n % 10;
        result += pow(rem, digits);
        n /= 10;
    }
    if(result == orig)
        printf("Armstrong\n");
    else
        printf("Not Armstrong\n");
    return 0;
}
