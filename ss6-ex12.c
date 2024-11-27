#include <stdio.h>

int main() {
    int n, a = 0, b = 1;

    printf("Nhap so n: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("%d ", a);
        a = a + b;
        b = a - b;
    }

    printf("\n");
    return 0;
}

