#include <stdio.h>

int main() {
    int n;

    printf("Nhap mot so nguyen: ");
    scanf("%d", &n);

    for (int i = 1; i <= (n < 0 ? -n : n); i++) {
        if (n % i == 0) printf("%d ", i);
    }

    return 0;
}

