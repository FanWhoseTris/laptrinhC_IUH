#include <stdio.h>

int main(){
    int n,s=0;
    printf("Nhap n:");
    scanf("%d",&n);
    if (n<1){
        printf("n khong la so hoan chinh");
    }
    else {
        for (int i=1;i<n;i++){
            if (n%i==0){
                s+=i;
            }
        }
    }
    //printf("%d",s);
    if (s == n){
        printf("N la so hoan chinh");
    }
    else {
        printf("N khong la so hoan chinh");
    }
    return 0;

}