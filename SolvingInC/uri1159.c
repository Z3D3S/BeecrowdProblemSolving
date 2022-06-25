#include <stdio.h>
 
int main(){
	int X = 1,Somatorio,i,j;
	scanf("%d",&X);
	while(X != 0){
		Somatorio = 0;
		for(i = X,j = 0;j < 5;++i){
			if(i % 2 == 0){
				Somatorio += i;
				++j;
			}
		}
		printf("%d\n",Somatorio);
		scanf("%d",&X);
	}
 return 0;
}