#include <stdio.h>
#include <math.h>
int main(){
    int a,b,c,d, temp;
    printf("Nhap a:"); scanf("%d", &a);
    printf("Nhap b:"); scanf("%d", &b);
    printf("Nhap c:"); scanf("%d", &c);
    printf("Nhap d:"); scanf("%d", &d);
    if (a>b) {
        temp = a;
        a = b;
        b = temp;
    }
    if (a>c) {
        temp = a;
        a = c; 
        c = temp;
    }
    if (a>d) {
        temp = a;
        a = d; 
        d = temp;
    }
    if (b>c) {
        temp = b;
        b = c; 
        c = temp;
    }
    if (b>d) {
        temp = b;
        b = d; 
        d = temp;
    }
    printf("thu tu la:%d,%d,%d,%d",a,b,c,d);
    return 0;
}