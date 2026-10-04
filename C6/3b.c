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

int tong_cac_so_nguyen_to(int a[], int n) {
    int tong = 0;
    for(int i = 0; i < n; i++) {
        if(la_so_nguyen_to(a[i]) == true) {
            tong = tong + a[i];
        }
    }
    return tong;
}

int main() {
    int a[100];
    int n;

    nhap_mang(a, n);
    
    int ket_qua = tong_cac_so_nguyen_to(a, n);
    cout << "Tong cac so nguyen to trong mang la: " << ket_qua << endl;

    return 0;
}
