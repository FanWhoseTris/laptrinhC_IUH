#include <stdio.h>

int main(){
    int a,b ;
    printf("Nhap a:"); scanf("%d",&a);
    printf("Nhap b:"); scanf("%d",&b);
    int ucln = 1 ;
    if (a==0 || b==0){
        ucln = a+b;
    }
    else{
        while (a!=b){
            if (a>b) a=a-b;
            else if (b>a) b=b-a;
        }
    }
    printf("ucln: %d", a);
    return 0;
}