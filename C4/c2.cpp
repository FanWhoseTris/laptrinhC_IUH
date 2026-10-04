#include <stdio.h>

int main() {
    int n;
    long long S_a = 0;
    long long S_b = 0;
    double S_c = 0.0;
    long long S_d = 1; // Kh?i t?o b?ng 1 cho phép nhân
    long long S_e = 0;

    // Yêu c?u nh?p s? nguyên duong
    do {
        printf("Nhap mot so nguyen duong n: ");
        scanf("%d", &n);
        if (n <= 0) {
            printf("Vui long nhap so lon hon 0!\n");
        }
    } while (n <= 0);

    // Tính toán g?p trong m?t vòng l?p duy nh?t
    for (int i = 1; i <= n; i++) {
        S_a += i;
        S_b += (long long)i * i;
        S_c += 1.0 / i; // Ép ki?u ng?m d?nh d? tính s? th?c
        S_d *= i;       // Tính giai th?a i! d?a trên (i-1)!
        S_e += S_d;     // C?ng d?n giai th?a vào t?ng
    }

    printf("a. S = %lld\n", S_a);
    printf("b. S = %lld\n", S_b);
    printf("c. S = %f\n", S_c);
    printf("d. S = %lld\n", S_d);
    printf("e. S = %lld\n", S_e);

    return 0;
}

