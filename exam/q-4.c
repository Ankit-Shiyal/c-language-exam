#include <stdio.h>
int main() {
    int n, i;
    int arr1[50], arr2[50], sum[50];
    int *p1, *p2, *ps;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements of first array:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr1[i]);
    }

    printf("Enter elements of second array:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr2[i]);
    }

    p1 = arr1;
    p2 = arr2;
    ps = sum;

    for (i = 0; i < n; i++) {
        *(ps + i) = *(p1 + i) + *(p2 + i);
    }

    printf("Sum of two arrays:\n");
    for (i = 0; i < n; i++) {
        printf("%d\n ", sum[i]);
    }

    return 0;
}
