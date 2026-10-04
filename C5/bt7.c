#include <stdio.h>

int main(){
    int km;
    printf("Nhap km:");
    scanf("%d",&km);
    float s;
    s= 0;
    //a
    if (km <= 1){
        s=15000;
    }
    //b
    else if (km >=2 && km <=5){
        s = 15000 + (km-1)*13500;
    }
    //c
    else {
        s = 15000 + 13500*4 + (km-5)*11000;
    }
    //d
    if (km >120){
        s = s - s*0.1;
    }
    printf("ket qua: %.2f", s);
    return 0;
}