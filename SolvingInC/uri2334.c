#include <stdio.h>

int main() {
	int i , aux,j,k,cont;
	char Number[21];
	while(1){
		scanf("%s",Number);
		k = 0;
		cont = 0;
		if(Number[0] == '-'){
			++cont;
		}
		if(Number[1] == '1'){
			++cont;
		}
		for(i = 0;Number[i] != '\0';++i);
		--i;
		aux = i;
		if (cont == 2){
			break;
		}
		if (i == 0&&Number[i] == '0'){
			Number[i] = '0';
			k = 1;
			printf("%s\n",Number);
		}
		else if(Number[i] == '0'){
			while(Number[i] == '0'){
				Number[i] = '9';
				--i;
			}
			--Number[i];
		}
		else if(Number[i] != '0'){
			--Number[i];
		}
		if(k != 1){
			if(Number[0] == '0'&&aux != 0){
				j = 1;
			}
			else{
				j = 0;
			}
			for(j=j; j <= aux;++j){
				printf("%c",Number[j]);
			}
			printf("\n");
		}
	}
	

	return 0;
}