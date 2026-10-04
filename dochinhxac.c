#include <stdio.h>
#include <math.h>
#define Eps 0.0001
int main(){
    float x, s, y;
    printf("Nhap x:");
    scanf("%f",&x);
    /*
    s = 1;
    y = 1;
    int i=1;
    while (fabs(y) >= Eps){
        y = (y*x)/(i);
        s+=y;
        i++;
    }
    printf("ket qua la code:%f", s);
    printf("ket qua ham la:%f", exp(x));
    */
    s= 1;
    y=1;
    int i=2;
    while (fabs(y) >= Eps){
        y = -y*(x*x)/((i-1)*(i));
        s += y;
        i+=2;
    }
    printf("ket qua la code:%f", s);
    printf("ket qua ham la:%f", cos(x));
    return 0;
}