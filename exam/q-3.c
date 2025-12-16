#include <stdio.h>

void checkDivisible(int n) {
    if(n % 3 == 0 && n % 5 == 0)
        printf("Number is divisible by 3 and 5\n");
    else
        printf("Number is NOT divisible by 3 and 5\n");
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    checkDivisible(num);
    return 0;
}