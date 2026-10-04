#include <stdio.h>

int main() {
    char tenSanPham[100];
    int soLuong;
    float donGia, tien, thueVAT;
    
    printf("Nhap ten san pham: ");
    scanf(" %[^\n]", tenSanPham);
    
    printf("Nhap so luong: ");
    scanf("%d", &soLuong);
    
    printf("Nhap don gia: ");
    scanf("%f", &donGia);
    
    tien = soLuong * donGia;
    thueVAT = tien * 0.1;
    
    printf("\nTen san pham: %s\n", tenSanPham);
    printf("Tien phai tra: %.2f\n", tien);
    printf("Thue VAT (10%%): %.2f\n", thueVAT);
    printf("Tong thanh toan: %.2f\n", tien + thueVAT);
    
    return 0;
}

