#include <stdio.h>

int main() {
    int n;

    printf("Nhap cap n cua ma tran vuông: ");
    scanf("%d", &n);

    int a[n][n];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("Nhap a[%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    printf("Ma tran vua nhap la:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    printf("Ma tran theo thu tu nguoc lai la:\n");
    for (int i = n - 1; i >= 0; i--) {
        for (int j = n - 1; j >= 0; j--) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    return 0;
}


