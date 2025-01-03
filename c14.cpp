#include <stdio.h>

int main() {
    float num;
    int integer_part;
    float fractional_part;

    printf("Enter a number: ");
    scanf("%f", &num);

    // Separate the integer and fractional parts
    integer_part = (int)num;
    fractional_part = num - integer_part;

    // Reconstruct the number with 1 as the first digit after the decimal point
    num = integer_part + 0.1 + fractional_part;

    printf("Number with 1 inserted as the first digit after the decimal point: %.2f\n", num);

    return 0;
}
