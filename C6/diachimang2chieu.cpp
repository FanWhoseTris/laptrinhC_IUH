#include <stdio.h>

int a[3][4] =
{
    {0, 1, 2, 3},
    {4, 5, 6, 7},
    {8, 9, 10, 11}
};
int main()
{
    printf("Dia chi phan tu a[0][0] la %x\n",&a[0][0]);
    printf("Dia chi phan tu a[0][0] la %x\n",a[0]);
    printf("Dia chi phan tu a[0][0] la %x\n",a);

    printf("Dia chi phan tu a[0][1] la %x\n",&a[0][1]);
    printf("Dia chi phan tu a[0][2] la %x\n",&a[0][2]);
    return 0;
}

