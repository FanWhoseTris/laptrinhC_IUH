#include <stdio.h>
#include <math.h>

int main(){
    int n,nt;
    printf("Nhap n:");
    scanf("%d", &n);
    if (n<2){
        nt = 0;
    }
    else {
        nt = 1;
        for (int i=2;i<=sqrt(n);i++){
            if (n%i==0){
                nt = 0;
                break;
            }
        }
    }
    if (nt){
        printf("n la so nguyen to");
    }
    else {
        printf("n khong la so nguyen to");
    }
    return 0;
}