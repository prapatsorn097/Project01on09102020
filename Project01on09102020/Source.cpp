#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
    int n, coef = 1, space, i, j;
    printf("Input the number of rows: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        for (space = 1; space <= n - i; space++)
            printf("  ");
        for (j = 0; j <= i; j++) {
            if (j == 0 || i == 0)
                coef = 1;
            else
                coef = coef * (i - j + 1) / j;
            printf("%4d", coef);
        }
        printf("\n");
    }
    return 0;
}