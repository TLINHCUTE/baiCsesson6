#include <stdio.h>

int main() {
    int n, first = 0, second = 1, next;

    printf("Nhập số nguyên n: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Vui lòng nhập một số nguyên dương.\n");
    } else if (n == 1) {
        printf("Dãy Fibonacci: %d\n", first);
    } else {
        printf("Dãy Fibonacci: %d, %d", first, second);
        for (int i = 3; i <= n; i++) {
            next = first + second;
            printf(", %d", next);
            first = second;
            second = next;
        }
        printf("\n");
    }

    return 0;
}
