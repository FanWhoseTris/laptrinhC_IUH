#include <stdio.h>
#include <math.h>

void in(int length, int a[]){
	for (int i=0;i<length;i++){
		printf("%d ",a[i]);
	}
	printf("\n");
}
void copied(int n, int x[], int a[]){
	for (int i=0;i<n;i++){
		a[i] = x[i];
	}
}
int prime(int x){
	if (x<2) return 0;
	for (int i=2;i<=sqrt(x);i++){
		if (x%i==0){
			return 0;
		}
	}
	return 1;
}
int main(){
	int n=19;
	int x[] = {9,6,9,1,3,5,7,2,10,6,0,0,6, -1,-2,-15,-9,-6,0};
	in(n,x);
	
	//cau A
	int na=0;
	int a[100];
	copied(n, x,a);
	for (int i=0;i<n;i++){
		if (prime(x[i]) && x[i] >0){
			a[na++] = x[i];
		}
	}
	in(na, a);
	
	//cau B
	int b[100], acb[100];
	int nb = 0, cb=0;
	for (int i=0;i<n;i++){
		if (x[i] >0){
			b[nb++] = x[i];
		}
		else if(x[i] < 0){
			acb[cb++] = x[i];
		}
	}
	in(nb, b);
	in(cb, acb);
	
	//cau C
	int c[100];
	int nc=n, temp=0;
	copied(nc, a, c);
	for (int i=0;i<nc;i++){
		for (int j=i;j<nc;j++){
			if (c[i] <= c[j]){
				temp = c[i];
				c[i] = c[j];
				c[j] = temp;
			}
		}
	}
	in(nc,c);
	

    return 0;
}
