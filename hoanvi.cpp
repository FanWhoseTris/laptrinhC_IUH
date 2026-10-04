#include <stdio.h>

void HoanVi (int &a, int &b) ;
int main()
{
	int x = 2912, y = 1706;
	HoanVi (x, y) ;
	return 0;
}



void HoanVi (int &a, int &b)
{
	int tam = a;
	a = b;
	b = tam;
}
