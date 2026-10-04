#include <stdio.h>

int main(){
    int n, kq;
    printf("Enter n:");
    scanf("%d", &n);
    kq = 0;
    while n > 0{
        kq = kq*10 +n%10;
        n/=10;
    }
    printf("answer: %d", kq);
    return 0;
}