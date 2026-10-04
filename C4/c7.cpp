#include <stdio.h>

int main() {
    int a, b;
    
    do {
        printf("Nhap 2 so nguyen duong a va b: ");
        scanf("%d %d", &a, &b);
    } while (a <= 0 || b <= 0);

    int temp_a = a;
    int temp_b = b;

    // Thu?t toán Euclid tìm UCLN b?ng phép chia du
    while (temp_b != 0) {
        int r = temp_a % temp_b;
        temp_a = temp_b;
        temp_b = r;
    }

    printf("Uoc chung lon nhat cua %d va %d la: %d\n", a, b, temp_a);
    return 0;
}

