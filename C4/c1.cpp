#include <stdio.h>
#include <math.h>

int main() {
    int n;
    
    do {
        printf("Nhap mot so nguyen duong n (n > 0): ");
        scanf("%d", &n);
    } while (n <= 0);

    int temp = n;
    int reversed = 0;
    while (temp > 0) {
        reversed = reversed * 10 + temp % 10;
        temp /= 10;
    }
    if (n == reversed) {
        printf("a. %d la so doi xung.\n", n);
    } else {
        printf("a. %d khong phai la so doi xung.\n", n);
    }

    int sqRoot = (int)sqrt(n);
    if (sqRoot * sqRoot == n) {
        printf("b. %d la so chinh phuong.\n", n);
    } else {
        printf("b. %d khong phai la so chinh phuong.\n", n);
    }

    int isPrime = 1;
    if (n < 2) {
        isPrime = 0;
    } else {
        for (int i = 2; i <= sqrt(n); i++) {
            if (n % i == 0) {
                isPrime = 0;
                break;
            }
        }
    }
    if (isPrime) {
        printf("c. %d la so nguyen to.\n", n);
    } else {
        printf("c. %d khong phai la so nguyen to.\n", n);
    }

    temp = n;
    int rightDigit = temp % 10;
    int maxDigit = rightDigit;
    int minDigit = rightDigit;
    temp /= 10;

    int isInc = 1, isDec = 1;
    if (temp == 0) {
        isInc = 0;
        isDec = 0;
    }

    while (temp > 0) {
        int leftDigit = temp % 10;

        if (leftDigit > maxDigit) maxDigit = leftDigit;
        if (leftDigit < minDigit) minDigit = leftDigit;

        if (leftDigit >= rightDigit) isInc = 0;
        if (leftDigit <= rightDigit) isDec = 0;

        rightDigit = leftDigit;
        temp /= 10;
    }

    printf("d. Chu so lon nhat la %d, nho nhat la %d.\n", maxDigit, minDigit);

    if (isInc) {
        printf("e. Cac chu so cua %d tang dan (tu trai sang phai).\n", n);
    } else if (isDec) {
        printf("e. Cac chu so cua %d giam dan (tu trai sang phai).\n", n);
    } else {
        printf("e. Cac chu so cua %d khong tang dan cung khong giam dan.\n", n);
    }

    return 0;
}

