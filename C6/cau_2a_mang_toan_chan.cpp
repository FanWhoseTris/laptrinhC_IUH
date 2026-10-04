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

bool mang_toan_chan(int a[], int n) {
    for(int i = 0; i < n; i++) {
        if(a[i] % 2 != 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int a[100];
    int n;

    nhap_mang(a, n);
    
    if(mang_toan_chan(a, n) == true) {
        cout << "Mang nay la mang toan chan" << endl;
    } else {
        cout << "Mang nay khong phai mang toan chan" << endl;
    }

    return 0;
}