#include<stdio.h>

int main()
{
    int a,b;
    printf("Nhap a:");
    scanf("%d",&a);
    printf("Nhap b:");
    scanf("%d",&b);
    if (a==0){
        prinf("Phuong trinh vo nghiem");
    }
    else {
        if (b==0){
            prinf("Phuong trinh co nghiem x=0");
        }
        else{
            float x =  -b/a
            prinf("Phuong trinh co nghiem x=%f",x);
        }
    }
}