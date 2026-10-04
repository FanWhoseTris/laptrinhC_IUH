#include <stdio.h>

int main() {
    int n;
    int reversed = 0;

    do {
        printf("Nhap vao so nguyen duong n: ");
        scanf("%d", &n);
    } while (n <= 0);

    // Thu?t toán tách ch? s? t? ph?i qua trái
    while (n > 0) {
        reversed = reversed * 10 + n % 10;
        n /= 10;
    }

    printf("So nguoc lai la: %d\n", reversed);
    return 0;
}

