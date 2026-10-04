#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c, delta;
    printf("Nhap he so a, b, c: ");
    scanf("%f %f %f", &a, &b, &c);

    if (a == 0) {
        if (b == 0) {
            if (c == 0) printf("Phuong trinh vo so nghiem.\n");
            else printf("Phuong trinh vo nghiem.\n");
        } else {
            printf("Phuong trinh co 1 nghiem: x = %g\n", -c / b);
        }
    } else {
        delta = b * b - 4 * a * c;
        if (delta < 0) {
            printf("Phuong trinh vo nghiem.\n");
        } else if (delta == 0) {
            printf("Phuong trinh co nghiem kep x1 = x2 = %g\n", -b / (2 * a));
        } else {
            printf("Phuong trinh co 2 nghiem phan biet:\n");
            printf("x1 = %g\n", (-b + sqrt(delta)) / (2 * a));
            printf("x2 = %g\n", (-b - sqrt(delta)) / (2 * a));
        }
    }
    return 0;
}

