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

bool mang_tang_dan(int a[], int n) {
    for(int i = 0; i < n - 1; i++) {
        if(a[i] >= a[i + 1]) {
            return false;
        }
    }
    return true;
}

int main() {
    int a[100];
    int n;

    nhap_mang(a, n);
    
    if(mang_tang_dan(a, n) == true) {
        cout << "Mang nay la mang tang dan" << endl;
    } else {
        cout << "Mang nay khong phai mang tang dan" << endl;
    }

    return 0;
}