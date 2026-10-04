#include <stdio.h>


int main(){ 
    int n;
    printf("Nhap n:");
    scanf("%d",&n);
    int a[n];
    /*
    for (int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    */
    a[0] = a[1] = 1;
    for (int i=2;i<n;i++){
        a[i]= a[i-1]+a[i-2];
        printf("%d   ",a[i]);
    }
    return 0;
}