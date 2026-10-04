#include <stdio.h>

int main(){
    int prime[51];
    for (int i=2;i<=50;i++){
        prime[i] = 1;
    }
    for (int i=2;i<=50;i++){
        if (prime[i]){
            for (int j=i*2;j<=50;j+=i){
                prime[j] = 0;
            }
        }
    }
    int s = 0;
    for (int i=2;i<=50;i++){
        if (prime[i]){
            printf("%d  ",i);
            s+=i;
        }
    }
    printf("\nKet qua tong la: %d",s);
    return 0;
}