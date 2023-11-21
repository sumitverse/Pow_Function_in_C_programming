#include <stdio.h>

double power(double base, int exponent) {
    double result = 1.0;

    for (int i = 0; i < exponent; i++) {
        result *= base;
    }

    return result;
}

int main() {
    double base;
    int exponent;

    printf("Enter base: ");
    scanf("%lf", &base);
    printf("Enter exponent: ");
    scanf("%d", &exponent);

    double result = power(base, exponent);
    printf("%lf ^ %d = %lf\n", base, exponent, result);

    return 0;
}