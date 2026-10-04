#include <stdio.h>

int main() {
    int s, m, h;
    printf("Nhap gio: ");
    scanf("%d", &h);
    printf("Nhap phut: ");
    scanf("%d", &m);
    printf("Nhap giay: ");
    scanf("%d", &s);
    
    
    if (s>=0 && s <= 60 && m>=0 && m <=60 && h>=0 && h<=12){
        printf("Thoi gian hop le");
        s--;
        if (s < 0) {
            s = 59;
            m--;
            if (m < 0){
                m=59;
                h--;
                if (h <0){
                    h=11;
                }
            }
        }
        printf("\nNew: %d :: %d :: %d", h, m, s);
    }
    else{
        printf("Thoi gian khong hop le");
    }
    return 0;
}