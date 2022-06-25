#include <stdio.h> 
void troca_SQ_nao(int a ,int b ,int n){
 	int aux;
 	while(1){
 		if(a > b){
 			aux = a;
 			a = b;
 			b = aux;

 		}
 		if( b > n){
 			aux = b;
 			b = n;
 			n = aux;
 		}
 		if(a <= b&&a <= n){
 			break;
 		}
 	}
 	printf("%d\n%d\n%d\n\n",a ,b, n);
}
int main() {
	int a,b,n;
	scanf("%d %d %d",&a,&b,&n);
	troca_SQ_nao(a,b,n);
	printf("%d\n%d\n%d\n",a ,b, n);
 
    return 0;
}