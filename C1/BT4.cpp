#include <stdio.h>

int main() {
    float km, tien = 0;
    
    printf("Nhap so km: ");
    scanf("%f", &km);

    if (km <= 0) {
        printf("So km khong hop le.\n");
    } else {
        if (km <= 1) {
            tien = km * 15000;
        } else if (km <= 5) {
            tien = 15000 + (km - 1) * 13500;
        } else {
            tien = 15000 + 4 * 13500 + (km - 5) * 11000;
        }
        
        if (km > 120) {
            tien = tien * 0.9; // Giam 10%
        }
        
        printf("Tong tien phai tra: %.0f VND\n", tien);
    }
    
    return 0;
}
