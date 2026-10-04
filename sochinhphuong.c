#include <stdio.h>

int main(){
    int n;
    printf("Nhap n:");
    scanf("%d", &n);
    int cp = 0;
    if (n<1) {
        cp = 0;
    }    
    else{
        cp = 0;
        for (int i=1;i<=sqrt(n);i++){
            if (n==i*i){
                cp = 1;
                break;
            }
        }
    }
    if (cp){
        printf("N la so chinh phuong");
    }
    else {
        printf("N khong la so chinh phuong");
    }
    
    return 0;
}