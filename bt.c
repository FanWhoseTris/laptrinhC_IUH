#include <stdio.h>
#include <math.h>
int main(){
 
    /*
    int n;
    printf("Nhap n:");
    scanf("%d", &n);
    if ( n< 9 && n > 1){
        printf("%d",n);
    }
    else {
        printf("dell bt");
    }
    */
    /*
    char a;
    printf("nhap chu cai");
    scanf("%c",&a);
    if ('a' <= a && a <= 'z'){
        a  = a- 32;
    }
    printf("%c", a);
    */
    /*
    float a,b,x;
    printf("Nhap a:");
    scanf("%f",&a);
    printf("Nhap b:");
    scanf("%f",&b);
    if (a==0){
        printf("Phuong trinh vo so nghiem");
    }
    else{
        if (b == 0){
            printf("Phuong trinh vo nghiem");
        }
        else{
            x = -b/a;
            printf("ket qua la:%f", x);
        }
    }

    */
    /*
    float a,b,c,x;
    printf("Nhap a:");
    scanf("%f",&a);
    printf("Nhap b:");
    scanf("%f",&b);
    printf("Nhap c:");
    scanf("%f",&c);
    if (a == 0){
        if (b==0){
            if (c==0){
                printf("VSN");
            }
            else{
                printf("VN");
            }
        }
        else{
            printf("phuong trinh la phuong trinh bac nhat:", -c/b);
        }
    }
    else{
        float delta = (b*b)-(4*a*c);
        if (delta < 0){
            printf("VN");
        }
        else{
            if (delta==0){
                printf("Phuong trinh co nghiem kep", -b/2*a);
            }
            else if (delta >0){
                printf("Phuong trinh co 2 nghiem");
                float x1 = (-b+sqrt(delta))/(2*a);
                float x2 = (-b-sqrt(delta))/(2*a);
                printf("Phuong trinh co 2 nghiem: x1 = %f, x2 = %f", x1,x2);
            }
        }
    }
    */
    int a,b,c,d, min;
    min = a;
    if (min < a)
    return 0;
}