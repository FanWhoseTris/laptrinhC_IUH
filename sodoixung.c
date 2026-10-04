#include <stdio.h>

int main(){
    int n,socuoi, kq;
    int xxx;
    printf("Nhap n:");
    scanf("%d",&n);
    xxx = n;
    kq = 0;
    while (n>0){
        socuoi = n%10;
        n = n/10;
        kq = kq*10+socuoi;
    }
    printf("kq: %d\n",kq);
    printf("x: %d\n",xxx);
    if (xxx==kq){
        printf("n la so doi xung");
    }
    else {
        printf("n khong la so doi xung");
    }
    return 0;
}