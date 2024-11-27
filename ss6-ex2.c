#include <stdio.h>

int main() {
    int i, num, chan = 0, le = 0;

    printf("Nhap 5 so nguyen:\n");
    for (i = 0; i < 5; i++) {
        printf("Nhap so thu %d: ", i + 1);
        scanf("%d", &num);

        if (num % 2 == 0)
            chan++;
        else
            le++;
    }
    printf("So luong so chan: %d\n", chan);
    printf("So luong so le: %d\n", le);

    return 0;
}

