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

std::pair<int, int> find(int n, int m,int a[][100], int target){

	for (int i=0;i<n;i++){
		for (int j=0;j<m;j++){
			if (a[i][j]==target){
				return {i,j};
			}
		}
	}
	return {-1, -1};
}

int main(){
	//nhap(&n,&m,a);
	
	int n=3, m=4;
	int a[100][100] =
	{
	    {0, 1, 2, 3},
	    {4, 5, 6, 7},
	    {8, 9, 10, 11}
	};
	

	xuat(n,m,a);
	int v = 3;
	std::pair<int, int> vitri = find(n,m,a,v);
	printf("toa do cua %d la [x=%d ,y=%d]", v, vitri.first, vitri.second);
	
	return 0;
}


/*
#include <stdio.h>

int n,m, a[100][100];

struct toado {
    int x;
    int y;
};

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

struct toado find(int n, int m, int a[][100], int an){
	struct toado kq;
	for (int i=0;i<n;i++){
		for (int j=0;j<m;j++){
			if (a[i][j] == an){
				kq.x = i;
				kq.y = j;
				return kq;
			}
		}
	}
	kq.x = -1;
	kq.y = -1;
	return kq;
}

int main(){
	//nhap(&n,&m,a);
	int n=3, m=4;
	int a[100][100] =
	{
	    {0, 1, 2, 3},
	    {4, 5, 6, 7},
	    {8, 9, 10, 11}
	};
	xuat(n,m,a);
	int v = 5;
	struct toado vitri = find(n,m,a,v);
	printf("gia tri x tai x=%d y=%d", vitri.x,vitri.y);
	
	return 0;
}
*/


