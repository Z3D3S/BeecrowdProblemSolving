#include<stdio.h>

int main(){
	int k,i,X,Y,V[1000],j;
	scanf("%d",&Y);
	for(j = 0;j < Y;++j){
		k = 0;
		scanf("%d",&X);
		for(i = 0;i < X;++i){
			if( i % 2 == 0){
				++k;
			}
			else{
				--k;
			}
		}
		V[j] = k;
	}
	for(j = 0;j < Y;++j){
		printf("%d\n",V[j]);
	}


	return 0;
}