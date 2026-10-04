#include <iostream>
using namespace std;

void nhap_mang(int a[], int &n) {
    cout << "Nhap so luong phan tu: ";
    cin >> n;
    for(int i = 0; i < n; i++) {
        cout << "Nhap phan tu thu " << i << ": ";
        cin >> a[i];
    }
}

int tim_vi_tri_cuoi_cung(int a[], int n, int x) {
    for(int i = n - 1; i >= 0; i--) {
        if(a[i] == x) {
            return i;
        }
    }
    return -1;
}

int main() {
    int a[100];
    int n;
    int x;

    nhap_mang(a, n);
    
    cout << "Nhap phan tu x can tim: ";
    cin >> x;

    int vi_tri = tim_vi_tri_cuoi_cung(a, n, x);
    
    if(vi_tri != -1) {
        cout << "Vi tri cuoi cung cua " << x << " la: " << vi_tri << endl;
    } else {
        cout << "Khong tim thay " << x << " trong mang." << endl;
    }

    return 0;
}
