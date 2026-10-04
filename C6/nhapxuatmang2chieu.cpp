#include <stdio.h>
int n=3,m=4;
void in(int n, int m, int a[][m]){
	for (int i=0;i<n;i++){
		for (int j=0;j<m;j++){
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
}

int main(){
	
	
	int a[3][4] =
	{
	    {0, 1, 2, 3},
	    {4, 5, 6, 7},
	    {8, 9, 10, 11}
	};
	in(n,m,a);
	return 0;
}
