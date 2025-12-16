#include <stdio.h>

int main() {
    int num, first, last;

    printf("Enter a 3-digit  number: ");
    scanf("%d", &num);

    first = num / 100;

    last = num % 10;
    

    printf("first digit = %d\n", first);

    printf("last digit = %d\n", last);

     printf("Sum of first and last digit = %d\n", first + last);

    return 0;
}