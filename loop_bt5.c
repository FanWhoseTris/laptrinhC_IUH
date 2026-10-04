#include <stdio.h>

int main(){
    int n,m = 0, temp;
    printf("Nhap n:");
    scanf("%d",&n);
    while (n>0){
        temp = n%10;
        //printf("%d \n",temp);
        m = m*10+temp;
        //printf("%d \n",m);
        n/=10;
    }
    printf("%d",m);
    return 0;
}