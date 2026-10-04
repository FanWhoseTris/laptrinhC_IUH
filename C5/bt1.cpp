#include <stdio.h>
#include <math.h>
int num1 = 45, num2 = 12, num3 = 78, num4 = 3;
char thuongsanghoa(char &c){
	c = c - 32;
	return c;
}

void tinhphuongtrinhbacnhat(float a, float b){
	if (a == 0){
		if (b == 0){
			printf("phuong trinh co vo so nghiem \n");
		} 
		else{
			printf("phuong trinh vo nghiem \n");
		}
	}
	else{
		float x = -b/a;
		printf("dap an la:%.1f \n", x);
	}
}

void phuongTrinhBacHai(float a, float b, float c) {
    if (a == 0) {
        tinhphuongtrinhbacnhat(b, c); 
        return;
    }
    float delta = b * b - 4 * a * c;
    if (delta < 0) {
        printf("PT bac 2: Vo nghiem\n");
    } else if (delta == 0) {
        printf("PT bac 2: Nghiem kep x1 = x2 = %.2f\n", -b / (2 * a));
    } else {
        float x1 = (-b + sqrt(delta)) / (2 * a);
        float x2 = (-b - sqrt(delta)) / (2 * a);
        printf("PT bac 2: Hai nghiem phan biet x1 = %.2f, x2 = %.2f\n", x1, x2);
    }
}

int minCuaBonSo(int a, int b, int c, int d) {
    int min = a;
    if (b < min) min = b;
    if (c < min) min = c;
    if (d < min) min = d;
    return min;
}

void hoanVi(int &x, int &y) {
    int temp = x;
    x = y;
    y = temp;
}

void sapXepBonSo() {
    if (num1 > num2) hoanVi(num1, num2);
    if (num1 > num3) hoanVi(num1, num3);
    if (num1 > num4) hoanVi(num1, num4);
    if (num2 > num3) hoanVi(num2, num3);
    if (num2 > num4) hoanVi(num2, num4);
    if (num3 > num4) hoanVi(num3, num4);
    printf("Sau khi sap xep tang dan: %d, %d, %d, %d\n", num1, num2, num3, num4);
}

int main(){
	// CAU 1A
	char kituthuong;
	printf("Nhap ki tu thuong:");
	scanf("%c", &kituthuong);
	if ('a' <= kituthuong && kituthuong <= 'z'){
		printf("ki tu hoa la:%c \n",thuongsanghoa(kituthuong));
	}
	else {
		printf("ki tu da la ki tu HOA \n");
	}
	//CAU 1B
	tinhphuongtrinhbacnhat(3.2, 5.0);
	
	
	//CAU 1C
    phuongTrinhBacHai(1.1, -3.1, 2.1); 

    //CAU 1D
    printf("Min la: %d\n", minCuaBonSo(5, 2, 8, -1));

    //CAU 1E
    int a = 2, b = 9;
    hoanVi(a,b);
    
    
    //CAU 1f
    printf("Truoc khi sap xep: %d, %d, %d, %d\n", num1, num2, num3, num4);
    sapXepBonSo();
    
	return 0;


}




