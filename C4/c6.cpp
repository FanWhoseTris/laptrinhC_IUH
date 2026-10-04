#include <stdio.h>

int main() {
    printf("Cac so thoa man dieu kien la:\n");
    
    // Duy?t qua t?t c? các s? có 2 ch? s?
    for (int i = 10; i <= 99; i++) {
        int hangChuc = i / 10;
        int hangDonVi = i % 10;
        
        int tich = hangChuc * hangDonVi;
        int tong = hangChuc + hangDonVi;
        
        if (tich == 2 * tong) {
            printf("%d ", i);
        }
    }
    
    printf("\n");
    return 0;
}

