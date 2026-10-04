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

int tim_so_nho_nhat(int a[], int n) {
    int nho_nhat = a[0];
    for(int i = 1; i < n; i++) {
        if(a[i] < nho_nhat) {
            nho_nhat = a[i];
        }
    }
    return nho_nhat;
}

int main() {
    int a[100];
    int n;

    nhap_mang(a, n);
    
    if(n > 0) {
        int ket_qua = tim_so_nho_nhat(a, n);
        cout << "So nho nhat trong mang la: " << ket_qua << endl;
    }

    return 0;
}
