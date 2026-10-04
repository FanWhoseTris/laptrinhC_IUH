#include <stdio.h>
#include <math.h>
#define G 6.67E-11
int main() {
    int sotien,to50, to20,to10, to5, to2, to1;
    printf("Nhap so tien:");
    scanf("%d", &sotien);
    to50 = sotien /  50;
    sotien %= 50;
    to20 = sotien /  20;
    sotien %= 20;
    to10 = sotien /  10;
    sotien %= 10;
    to5 = sotien /  5;
    sotien %= 5;
    to2 = sotien /  2;
    sotien %= 2;
    to1 = sotien /  1;
    printf("so tờ 50 :%d \n", to50);
    printf("so tờ 20 :%d \n", to20);
    printf("so tờ 10 :%d \n", to10);
    printf("so tờ 5 :%d \n", to5);
    printf("so tờ 2 :%d \n", to2);
    printf("so tờ 1 :%d \n", to1);
}