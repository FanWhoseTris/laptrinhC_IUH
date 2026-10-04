#include <stdio.h>

int main() {
    int a, b, n;
    int sum = 0;

    // Yêu c?u nh?p d? li?u cho d?n khi h?p l? (a, b < n)
    do {
        printf("Nhap a, b, n (dieu kien a < n va b < n): ");
        scanf("%d %d %d", &a, &b, &n);
        if (a >= n || b >= n) {
            printf("Du lieu khong hop le. Vui long nhap lai!\n");
        }
    } while (a >= n || b >= n);

    // Duy?t t? 1 d?n n-1 vì d? yêu c?u "s? nguyên duong nh? hon n"
    for (int i = 1; i < n; i++) {
        // Ki?m tra di?u ki?n: chia h?t cho a VÀ không chia h?t cho b
        if (i % a == 0 && i % b != 0) {
            sum += i;
        }
    }

    printf("Tong cac so thoa man la: %d\n", sum);
    return 0;
}

