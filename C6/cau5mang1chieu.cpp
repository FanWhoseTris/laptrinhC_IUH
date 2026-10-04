#include <stdio.h>
#include <math.h>

int laNguyenTo(int n) {
    if (n < 2) return 0;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) return 0;
    }
    return 1;
}

int main() {
    int n;
    printf("Nhap so phan tu cua mang a: ");
    scanf("%d", &n);

    int a[n];
    for (int i = 0; i < n; i++) {
        printf("Nhap a[%d]: ", i);
        scanf("%d", &a[i]);
    }

    int b_prime[n], n_prime = 0;
    for (int i = 0; i < n; i++) {
        if (laNguyenTo(a[i])) {
            b_prime[n_prime++] = a[i];
        }
    }
    printf("\na. Mang b (cac so nguyen to): ");
    for (int i = 0; i < n_prime; i++) {
        printf("%d ", b_prime[i]);
    }
    printf("\n");

    int b_pos[n], c_remain[n];
    int n_pos = 0, n_remain = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] > 0) {
            b_pos[n_pos++] = a[i];
        } else {
            c_remain[n_remain++] = a[i];
        }
    }
    printf("\nb. Mang b (cac so nguyen duong): ");
    for (int i = 0; i < n_pos; i++) {
        printf("%d ", b_pos[i]);
    }
    printf("\n   Mang c (cac so con lai): ");
    for (int i = 0; i < n_remain; i++) {
        printf("%d ", c_remain[i]);
    }
    printf("\n");

    int temp_a[n];
    for (int i = 0; i < n; i++) temp_a[i] = a[i];
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (temp_a[i] < temp_a[j]) {
                int temp = temp_a[i];
                temp_a[i] = temp_a[j];
                temp_a[j] = temp;
            }
        }
    }
    printf("\nc. Mang a sau khi sap xep giam dan: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", temp_a[i]);
    }
    printf("\n");

    int special_a[n];
    int idx = 0;
    int pos_list[n], neg_list[n], zero_list[n];
    int n_p = 0, n_n = 0, n_z = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] > 0) pos_list[n_p++] = a[i];
        else if (a[i] < 0) neg_list[n_n++] = a[i];
        else zero_list[n_z++] = a[i];
    }
    for (int i = 0; i < n_p - 1; i++) {
        for (int j = i + 1; j < n_p; j++) {
            if (pos_list[i] < pos_list[j]) {
                int temp = pos_list[i];
                pos_list[i] = pos_list[j];
                pos_list[j] = temp;
            }
        }
    }
    for (int i = 0; i < n_n - 1; i++) {
        for (int j = i + 1; j < n_n; j++) {
            if (neg_list[i] > neg_list[j]) {
                int temp = neg_list[i];
                neg_list[i] = neg_list[j];
                neg_list[j] = temp;
            }
        }
    }
    for (int i = 0; i < n_p; i++) special_a[idx++] = pos_list[i];
    for (int i = 0; i < n_n; i++) special_a[idx++] = neg_list[i];
    for (int i = 0; i < n_z; i++) special_a[idx++] = zero_list[i];
    
    printf("\nd. Mang a theo yeu cau d: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", special_a[i]);
    }
    printf("\n");

    return 0;
}

