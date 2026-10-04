#include <stdio.h>

int main() {
    float r;
    float chuVi, dienTich;
    const float PI = 3.1415926535;

    printf("Nhap ban kinh cua duong tron: ");
    scanf("%f", &r);

    chuVi = 2 * PI * r;
    dienTich = PI * r * r;

    printf("Chu vi hinh tron: %.2f\n", chuVi);
    printf("Dien tich hinh tron: %.2f\n", dienTich);

    return 0;
}

