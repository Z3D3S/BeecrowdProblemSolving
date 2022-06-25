#include<stdio.h>
#include<math.h>

int main(){
    int x,j,i,Casa;
    double A;

    while((scanf("%d",&i)) && i){
        scanf("%d%d",&j,&x);
        Casa = i*j;
        if(x == 100){
        	A = (Casa*x)/100.0;
        }
        else{
        	A =	(i*j*100)/x;
        }
        A = pow(A,0.5);
 		printf("%.0lf\n",floor(A));
 
    }
    return 0;
 
}