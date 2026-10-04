#include <stdio.h>

int main() {
    int m, n;
    int a[100][100];

    printf("Nhap so hang m: ");
    scanf("%d", &m);
    printf("Nhap so cot n: ");
    scanf("%d", &n);

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("Nhap a[%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    printf("Ma tran in theo thu tu nguoc lai la:\n");
    for (int i = m - 1; i >= 0; i--) {
        for (int j = n - 1; j >= 0; j--) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    return 0;
}


