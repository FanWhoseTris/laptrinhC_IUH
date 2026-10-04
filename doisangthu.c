#include <stdio.h>

int main() {
    int d,m, y, A;
    printf("Nhap d:");
    scanf("%d", &d);
    printf("Nhap m:");
    scanf("%d", &m);
    printf("Nhap y:");
    scanf("%d", &y);
    A = d + 2*m + (3*(m+1)/5)+y+(y/4)-(y/100)+(y/400)+2;
    A %= 7;
    printf("A = %d \n", A);
    switch (A){
        case 1:
            printf("Chu nhat");
            break;
        case 2:
            printf("Thu hai");
            break;
        case 3:
            printf("Thu ba");
            break;
        case 4:
            printf("Thu tu");
            break;
        case 5:
            printf("Thu nam");
            break;
        case 6:
            printf("Thu sau");
            break;
        case 0:
            printf("Thu bay");
            break;
    }
    return 0;
}