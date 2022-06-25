#include <stdio.h>
 
int main() {
	float Idade = 0,Media = 0;
	int cont = -1;
	while(Idade >= 0){
		scanf("%f",&Idade);
		if(Idade >= 0){
			Media += Idade;
		}
		++cont;
	}
	printf("%.2f\n",Media/cont);
    return 0;
}