#include <stdio.h>
#include <math.h>
int main(){
    /*
    float s,n;
    n = 10;
    for (int i=1;i<=n;i++){
        s+=(i*(i+1));
    }
    printf("%f \n", s);
    n = 4;
    int y = 1;
    s = 1;
    for (int i=2;i<=n;i++){
        y=y*(i-1);
        s+=(i*y*i);
        
    }
    printf("%f \n", s);
    
    
    int x = 5;
    s = 1;
    double y = 1;
    int i=1;
    
    while (fabs(y) >= 0.0001){
        y = (y*x) / i;
        s+=y;
        i++;
    }
    printf("%lf \n", s);
    printf("%lf \n", exp(x));
    */
    
    int x = 5;
    
    double s = 1;
    double y = 1;
    int i=2;
    
    while (fabs(y) >= 0.0001){
        y = -(y*x*x) / ((i-1)*(i));
        s+=y;
        i+=2;
    }
    printf("%lf \n", s);
    printf("%lf \n", cos(x));
    

    return 0;
}