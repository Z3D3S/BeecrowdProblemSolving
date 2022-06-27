#include <stdio.h>
#include <string.h>
int main() {
	int N,i,j,guardaescri,guardacasa,cont1,cont2;
	char String1[10];
	scanf("%d",&N);
	guardacasa = 0;
	guardaescri = 0;
	cont1 = 0;
	cont2 = 0;
	for(i = 0;i < N;++i){
		for(j = 0;j < 2;++j){
			scanf("%s",String1);
			if(strcmp(String1,"chuva") == 0&&j){
				++guardacasa;
				if(guardaescri){
					--guardaescri;
				}
				else{
					cont1++;
				}
			}
			if(strcmp(String1,"chuva") == 0&&j == 0){
				++guardaescri;
				if(guardacasa){
					--guardacasa;
				}
				else{
					cont2++;
				}	
			}
		}
	}
	printf("%d %d\n",cont2,cont1);
	return 0;
}