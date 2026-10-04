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

int tim_vi_tri_nguyen_to_dau_tien(int a[], int n) {
    for(int i = 0; i < n; i++) {
        if(la_so_nguyen_to(a[i]) == true) {
            return i;
        }
    }
    return -1;
}

int main() {
    int a[100];
    int n;

    nhap_mang(a, n);
    
    int vi_tri = tim_vi_tri_nguyen_to_dau_tien(a, n);
    
    if(vi_tri != -1) {
        cout << "Vi tri so nguyen to dau tien la: " << vi_tri << endl;
    } else {
        cout << "Mang khong co so nguyen to." << endl;
    }

    return 0;
}
