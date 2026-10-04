#include <stdio.h>

int main() {
    int n;
    
    printf("Nhap n: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("So luong phan tu phai lon hon 0.\n");
    } else if (n == 1) {
        printf("Day Fibonacci: 1\n");
    } else {
        long long a0 = 1;
        long long a1 = 1;
        long long next;

        printf("Day Fibonacci: %lld %lld ", a0, a1);

        for (int i = 2; i < n; i++) {
            next = a0 + a1;
            printf("%lld ", next);
            // C?p nh?t giá tr? cho vòng l?p ti?p theo
            a0 = a1;
            a1 = next;
        }
        printf("\n");
    }

    return 0;
}

