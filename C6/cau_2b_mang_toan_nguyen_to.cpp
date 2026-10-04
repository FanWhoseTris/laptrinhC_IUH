#include <iostream>
#include <math.h>
using namespace std;

void nhap_mang(int a[], int &n) {
    cout << "Nhap so luong phan tu: ";
    cin >> n;
    for(int i = 0; i < n; i++) {
        cout << "Nhap phan tu thu " << i << ": ";
        cin >> a[i];
    }
}

bool la_so_nguyen_to(int x) {
    if(x < 2) {
        return false;
    }
    for(int i = 2; i <= sqrt(x); i++) {
        if(x % i == 0) {
            return false;
        }
    }
    return true;
}

bool mang_toan_nguyen_to(int a[], int n) {
    for(int i = 0; i < n; i++) {
        if(la_so_nguyen_to(a[i]) == false) {
            return false;
        }
    }
    return true;
}

int main() {
    int a[100];
    int n;

    nhap_mang(a, n);
    
    if(mang_toan_nguyen_to(a, n) == true) {
        cout << "Mang nay la mang toan so nguyen to" << endl;
    } else {
        cout << "Mang nay khong phai mang toan so nguyen to" << endl;
    }

    return 0;
}