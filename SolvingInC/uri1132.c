#include <stdio.h>
 
int main() {
	int aux,f,A,B,Somatorio = 0;
	scanf("%d",&A);
	scanf("%d",&B);
	if(A > B){
		aux = A;
		A = B;
		B = aux;
	}
	for(f = A;f <= B;++f){
		if(f % 13 != 0){
			Somatorio += f;
		}
	}
	printf("%d\n",Somatorio);
    return 0;
}