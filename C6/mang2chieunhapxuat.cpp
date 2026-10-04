//khai bao a[5][7] voi kieu du lieu int
#include <stdio.h>
int main()
{
	int n=5;
    int a[5][7] =
    {
        {5,3,6,5,9},
        {1,3,6,8,0},
        {7,3,9,2,8},
        {7,6,3,2,3},
        {8,6,3,9,3}
    };
    for (int i=0;i<n;i++){
    	printf("%d ", a[i][i]);
	}
	for (int i=0;i<n;i++){
		for (int j=0;j<i;j++){
			printf("%d ", a[i][j]);
		}
		printf("\n");
	} 
	for (int i=0;i<n;i++){
		for (int j=i+1;j<n;j++){
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}
	for (int i=0;i<n;i++){
		printf("%d ", a[i][n-1-i]);
	}
	for (int i=0;i<n;i++){
		for (int j=n-i;j<n;j++){
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}
	for (int i=0;i<n;i++){
		for (int j=0;j<n-1-i;j++){
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
    return 0;
}
