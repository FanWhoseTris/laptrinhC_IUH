#include <stdio.h>

int main() {
    int a, b;
    int min, max;

    printf("Nhap so nguyen thu nhat: ");
    scanf("%d", &a);
    
    printf("Nhap so nguyen thu hai: ");
    scanf("%d", &b);

    if (a > b) {
        max = a;
        min = b;
    } else {
        max = b;
        min = a;
    }

    printf("Gia tri max la: %d\n", max);
    printf("Gia tri min la: %d\n", min);

    return 0;
}

