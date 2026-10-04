#include <stdio.h>

int main(){
    float diemchuan, diem1, diem2, diem3, diemuutien, diemkhuvuc, kq;
    int doituong;
    char khuvuc;
    printf("Nhap diem mon 1:");
    scanf("%f", &diem1);
    printf("Nhap diem mon 2:");
    scanf("%f", &diem2);
    printf("Nhap diem mon 3:");
    scanf("%f", &diem3);
    printf("Nhap khu vuc:");
    scanf(" %c", &khuvuc);
    printf("Nhap uu tien:");
    scanf("%d", &doituong);
    printf("Nhap diem chuan:");
    scanf("%f", &diemchuan);
    switch (khuvuc){
        case 'A':
            diemuutien = 2;
            break;
        case 'B':
            diemuutien = 1;
            break;
        case 'C':
            diemuutien = 0.5;
            break;
        default:
            {
                printf("Nhap sai khu vuc");
                return 1;
            }
    }
    switch (doituong){
        case 1:
            diemkhuvuc = 2.5;
            break;
        case 2:
            diemkhuvuc = 1.5;
            break;
        case 3:
            diemkhuvuc = 1;
            break;
        default:
            {
                printf("Nhap sai uu tien");
                return 1;
            }
    }
    kq = diem1 + diem2 + diem3 + diemuutien+diemkhuvuc;
    printf("Diem tong ket la: %f", kq);
    return 0;
}