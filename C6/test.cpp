#include <stdio.h>
#include <utility> 
int n,m, a[100][100];



void nhap(int *n, int *m, int a[][100]){
	printf("Nhap n:");
	scanf("%d",n);
	printf("Nhap n:");
	scanf("%d",m);
	for (int i=0;i<*n;i++){
		for (int j=0;j<*m;j++){
			printf("Nhap a[%d][%d]: ", i, j);
			scanf("%d", &a[i][j]);
		}
	}
}

void xuat(int n, int m, int a[][100]){
	for (int i=0;i<n;i++){
		for (int j=0;j<m;j++){
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}
}


int main(){
	//nhap(&n,&m,a);
	
	int n=5, m=4;
	int a[100][100] =
	{
	    {0, 1, 2, 3},
	    {4, 5, 6, 7},
	    {8, 9, 10, 11}
	};
	
	for (int i=0;i<n;i++){
		for (int j=0;j<i;j++){
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
