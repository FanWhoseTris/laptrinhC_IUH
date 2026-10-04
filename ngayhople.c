#include <stdio.h>

int main(){
    int d,m,y, dmax, newday, newmonth, newyear;
    printf("Nhap ngay: ");
    scanf("%d", &d);
    printf("Nhap thang: ");
    scanf("%d", &m);
    printf("Nhap nam: ");
    scanf("%d", &y);
    // Xac dinh so ngay trong thang
    switch(m){
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            dmax = 31;
            break;
        case 4: case 6: case 9: case 11:
            dmax = 30;
            break;
        case 2:
            if ((y % 400 == 0) || (y % 4  == 0 && y % 100 ==0))
                dmax = 29;
            else
                dmax = 28;
            break;
    }
    if (d > 0 && d <= dmax && m > 0 && m < 13 && y > 0){
        printf("Ngay hop le");
        newday = d+1;
        newmonth = m;
        newyear = y;
        if (newday > dmax){
            newday = 1;
            newmonth++;
            if (newmonth >12){
                newmonth = 1;
                newyear++;
            }
        }
        printf("Ngay tiep theo: %d/%d/%d", newday, newmonth, newyear);
    }
    else{
        printf("Ngay khong hop le");
    }
    return 0;
}