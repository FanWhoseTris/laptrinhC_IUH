#include <stdio.h>

int main() 
{
    int a;
    printf("Nhap a:");
    scanf("%d",&a);
    int b;
    printf("Nhap b:");
    scanf("%d",&b);
    switch (a) {
        case 1: printf("Mot");
        break;
        case 2: switch (b){
            case 1: printf("A"); break;
            case 2: printf("B"); break;
        } 
        break;
        case 3: printf("Ba");
        break;
        default: printf("Khong biet doc");
    }
    return 0;
}
