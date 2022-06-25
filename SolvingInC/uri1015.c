#include <stdio.h>
#include <math.h>

int main() {
 
    double X1,Y1,X2,Y2;
    double DISTANCE;
    double X,Y;
        
    scanf("%lf %lf",&X1,&Y1);
    scanf("%lf %lf",&X2,&Y2);
    
    Y = (Y2 - Y1)*(Y2 - Y1);
    X = (X2 - X1)*(X2 - X1);
         
    DISTANCE = sqrt(X + Y);
        
    printf("%.4lf\n", DISTANCE);
    
    return 0;
}