#include <stdio.h>

int main(){
    int n = 10, x = 12, vt=0;
    int a[10] = {9,12,7,8,12, 11, 12, 19,1,7};
    for (int i=0;i<=n;i++){
        if (a[i] == x){
            vt = i;
        }
    }
    printf("%d",vt);
    return 0;
}