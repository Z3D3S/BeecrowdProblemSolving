#include <stdio.h>
#include <math.h>

int main() {
 
        int X,Y,W,Z;
        
    scanf("%d %d %d",&X,&Y,&W);
        Z = (X+Y+abs(X-Y))/2;
        Z = (Z+W+abs(Z-W))/2;
    printf("%d eh o maior\n",Z);
    
    return 0;
}