#include <stdio.h>
 
int main() {
	int aux,f,A,B;
	scanf("%d",&A);
	scanf("%d",&B);
	if(A > B){
		aux = A;
		A = B;
		B = aux;
	}
	for(f = A+1;f < B;++f){
		if(f % 5 == 2||f % 5 == 3){
			printf("%d\n",f);
		}
	}
    return 0;
}