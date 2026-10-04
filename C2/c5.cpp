#include <stdio.h>

int main() {
    float a, b;
    
    printf("Nhap a: ");
    scanf("%f", &a);
    printf("Nhap b: ");
    scanf("%f", &b);
    
    printf("Tong: %.2f\n", a + b);
    printf("Hieu: %.2f\n", a - b);
    printf("Tich: %.2f\n", a * b);
    
    if (b != 0) {
        printf("Thuong: %.2f\n", a / b);
    } else {
        printf("Khong the chia cho 0\n");
    }
}

