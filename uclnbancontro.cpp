#include <stdio.h>
int ucln(int &a,int &b){
	int ucln = 1;
	if (a < 0) a = -a;
	if (b < 0) b = -b;
	if (a == 0 || b == 0){
		ucln = a + b;
	}
	else {
		while (a != b){
			if (a > b) a = a-b;
			else b = b - a;
		}
	}
	ucln = a;
	return ucln;
}
int main (){
	int a,b;
	printf("Nhap a:");
	scanf("%d",&a);
	printf("Nhap b:");
	scanf("%d",&b);
	printf("ucln: %d",ucln(a,b));
	return 0;
}
