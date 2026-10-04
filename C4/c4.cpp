#include <stdio.h>
#include <math.h>

int main() {
    int n;
    int sum = 0;

    do {
        printf("Nhap n (0 < n < 50): ");
        scanf("%d", &n);
    } while (n <= 0 || n >= 50);

    for (int i = 2; i < n; i++) {
        int isPrime = 1;
        // Ki?m tra xem s? i hi?n t?i có ph?i s? nguyên t? không
        for (int j = 2; j <= sqrt(i); j++) {
            if (i % j == 0) {
                isPrime = 0;
                break;
            }
        }
        if (isPrime) {
            sum += i;
        }
    }

    printf("Tong cac so nguyen to nho hon %d la: %d\n", n, sum);
    return 0;
}

