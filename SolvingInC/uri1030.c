#include <stdio.h>
int Funcion(int n,int k){
	if(n == 1){
		return 1;
	}
	else{
		return (k-1 + Funcion(n-1,k)) % n+1;
	}
}
int main() {
	int NC,k,n,Cont;
	scanf("%d",&NC);
	++NC;
	Cont = 1;
	while(--NC){
		scanf("%d",&n);
		scanf("%d",&k);
		printf("Case %d: %d\n",Cont,Funcion(n,k));
		++Cont;

	}

	return 0;
} 
