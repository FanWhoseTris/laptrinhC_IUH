#include <stdio.h>
struct toado{
	int x;
	int y;
};
void xuat(int n, int m, int a[][100]){
	for (int i=0;i<m;i++){
		for (int j=0;j<n;j++){
			printf("%d ", a[j][i]);
		}
		printf("\n");
	}
}

void nhap(int *n, int *m, int a[][100]){
	scanf("%d", n);
	scanf("%d",m);
	for (int i=0;i<*n;i++){
		for (int j=0;j<*m;j++){
			scanf("%d",&a[i][j]);
		}
	}
}

int main(){
	int n=3, m=5;
	toado vitri;
	int a[100][100] =
	{
	    {13, 4, 8, 14, 1},
	    {9, 6, 3, 7, 21},
	    {5,12,17,9,3}
	};
	//nhap(&n,&m,a);
	xuat(n,m,a);
	return 0;
}

