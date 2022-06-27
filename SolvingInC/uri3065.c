#include <stdio.h>
#include <stdlib.h>

int main() {
	int M,cont = 1,i,n,j;
	char string[500],stringaux[500];
	while(1){
		scanf("%d",&M);
		if(M == 0){
			break;
		}
		scanf("%s",string);
		i = 0;
		n = 0;
		while(string[i] != '\0'){
			if(string[i] >= '0'&&string[i] <= '9'){

				for(i =i,j = 0;string[i] >='0'&&string[i] <= '9';++i,++j){
					stringaux[j] = string[i];

				}
				stringaux[j] = '\0';
				n = atoi(stringaux);
			}
			else if(string[i] == '+'){
				for(i = i+1,j = 0;string[i] >='0'&&string[i] <= '9';++i,++j){
					stringaux[j] = string[i];

				}
				stringaux[j] = '\0';
				n += atoi(stringaux);
			}
			else if(string[i] == '-'){
				for(i = i+1,j = 0;string[i] >='0'&&string[i] <= '9';++i,++j){
					stringaux[j] = string[i];

				}
				stringaux[j] = '\0';
				n -= atoi(stringaux);
			}
			else{
				++i;
			}
		}
		printf("Teste %d\n",cont);
		printf("%d\n",n);
		printf("\n");
		++cont;
	}
	return 0;
}