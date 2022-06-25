#include <stdio.h>
 
int main() {
	int k,i,j,X,contp =0,conti=0;
	int NP[5],NI[5];
	for(k=0,i=0,j=0;k < 15;++k){
		scanf("%d",&X);
		if(X % 2 == 0){
			if(j == 5){
				j = 0;
			}
			NP[j] = X;
			++contp;
			++j;
			
		}
		else{
			if(i == 5){
				i = 0;
			}
			++conti;
			NI[i] = X;
			++i;
					}
		if(contp == 5){
			contp = 0;
			for(j = 0;j < 5;++j){
				printf("par[%d] = %d\n",j,NP[j]);
			}
		}
		if(conti == 5){
			conti = 0;
			for(i = 0;i < 5;++i){
				printf("impar[%d] = %d\n",i,NI[i]);
			}
		}
		if(k == 14){
			if(conti < 5){
				for(i = 0;i < conti;++i){
				printf("impar[%d] = %d\n",i,NI[i]);
			}	
			}
			if(contp < 5){
				for(j = 0;j < contp;++j){
				printf("par[%d] = %d\n",j,NP[j]);
			}

			}
		}
	}
    return 0;
}