#include <stdio.h>
 
int main() {
 
    int X,Y,Z;
    double DS,Gasto;
    X = 12.0;
        
    scanf("%d %d",&Y,&Z);
    
    DS = (Y*Z);
    Gasto = DS/X;
        
    printf("%.3lf\n", Gasto);
        
    return 0;
}