#include <stdio.h>

int main (){
    int a,b,n,s=0;
    printf("Nhap a:");
    scanf("%d",&a);
    printf("Nhap b:");
    scanf("%d",&b);
    printf("Nhap n:");
    scanf("%d",&n);
    for (int i=0;i<n;i++){
        if (i%a==0 &&i%b!=0){
            s+=i;
            printf("%d  ", i);
        }
    }
    printf("\n ket qua: %d",s);
    return 0;
}