#include <stdio.h>

int main() {
    int a, b, c, d, min;
    printf("Nhap 4 so nguyen a, b, c, d: ");
    scanf("%d %d %d %d", &a, &b, &c, &d);

    min = a;
    if (b < min) min = b;
    if (c < min) min = c;
    if (d < min) min = d;

    printf("Gia tri nho nhat la: %d\n", min);
    return 0;
}

