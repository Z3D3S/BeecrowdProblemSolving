#include <stdio.h>
 
int main() {
 
    double R,PI,V;
    PI = 3.14159;
        
    scanf("%lf", &R);
    
        V = (4.0/3.0)*PI*R*R*R;
        
    printf("VOLUME = %.3lf\n", V);
    
    return 0;
}