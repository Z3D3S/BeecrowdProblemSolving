#include <stdio.h>

int main() {
	int L,C,i,j;
	long int lajotasTipo1 = 0;
	long int lajotasTipo2 = 0;
	scanf("%d",&L);
	scanf("%d",&C);
	for(i = 0;i < L;++i){
		if(i == 0){
			for(j = 0;j < C-1;++j){
				lajotasTipo2 = 2 + lajotasTipo2;
			}
		}
		for(j = 0;j < C;++j){
			++lajotasTipo1;
		}
		if(i < L-1){
			++lajotasTipo2;
			for(j = j-1; j > 0;--j){
				++lajotasTipo1;
			}
			++lajotasTipo2;
		}
	}	
	printf("%ld\n",lajotasTipo1);
	printf("%ld\n",lajotasTipo2);

   
	return 0;
}