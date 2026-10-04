#include <stdio.h>

int main(){
    int a,b ;
    printf("Nhap a:"); scanf("%d",&a);
    printf("Nhap b:"); scanf("%d",&b);
    int ucln = 1;
    if (a < 0) a =-a;
    if (b<0) b=-b;
    if (a==0 || b==0){
        ucln = a+b;
    }
    else {
        while (a!=b){
            if (a>b) a = a-b;
            else b=b-a;
        }
        ucln = a;
    }
    printf("UCLN: %d", ucln);
    return 0;
}