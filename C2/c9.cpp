#include <stdio.h>

int main() {
    int soXe;
    int hangNghin, hangTram, hangChuc, hangDonVi;
    int tong, soNut;

    printf("Nhap bien so xe (4 chu so): ");
    scanf("%d", &soXe);

    hangNghin = soXe / 1000;
    hangTram = (soXe % 1000) / 100;
    hangChuc = (soXe % 100) / 10;
    hangDonVi = soXe % 10;

    tong = hangNghin + hangTram + hangChuc + hangDonVi;
    soNut = tong % 10;

    printf("So xe cua ban duoc %d nut.\n", soNut);

    return 0;
}

