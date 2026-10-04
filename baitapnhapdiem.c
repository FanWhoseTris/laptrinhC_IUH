#include <stdio.h>
int main() 
{
    float diem;
    printf("Nhap diem hoc sinh: ");
    scanf("%f", &diem);
    if (diem < 0 || diem > 10) {
        printf("Diem khong hop le\n");
        return 1;
    }
    if (diem >= 7) {
        if (diem < 8) {
            printf("Kha\n");
        }
        else if (diem >= 8 && diem < 9){
            printf("Gioi\n");
        }
        else{
            printf("Xuat sac\n");
        }
    }
    else {
        if (diem >= 6){
            printf("Trung binh Kha\n");
        }
        else if (diem >=5 && diem <6){
            printf("Trung BInh\n");
        }
        else{
            printf("Yeu\n");
        }
    }
    return 0;
}
