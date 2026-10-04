#include <stdio.h>
#include <math.h>
int main() {
    int n;
    
    
    printf("Nhap so luong phan tu n: ");
    scanf("%d", &n);
    
    int arr[n]; 
    int sangnguyento[n];
    for (int i=1;i<=n;i++){
        sangnguyento[i] = 1;
    }
    for (int i=2;i <= n;i++){
        if (sangnguyento[i] == 1) {
            for (int j=i*i;j<=n;j+=i){
                sangnto[j] = 0;
            }
        }
    }
    for (int i = 0; i < n; i++) {
        printf("Nhap phan tu thu %d: ", i);
        scanf("%d", &arr[i]);
    }
    
    printf("\nMang vua nhap la: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    for (int i=2;i<=n;i++){
        if (sangnguyento[i]==1){
            printf("\n so nguyen to: %d",i);
        }
    }
    printf("\n end");
    int flag = 0;
    for (int i=0;i<n;i++){
        flag = 0;
        if (arr[i]<2){
            continue;
        }
        for (int j=2;j<=sqrt(arr[i]);j++){
            if (arr[i] % j == 0){
                flag = 1;
                break;
            }
        }
        if (flag == 0){
            printf("\n so arr[%d]=%d la so nguyen to", i, arr[i]);
        }
    }
    return 0;
}