#include <stdio.h>
 
int main() {
	float i,j,cont = 0,Concert = 15;
	for(i = 0;i < 22;i = i + 2){
		for(j = 10+cont; j < 40+cont;j = j +10){
			if(Concert > 12){
				printf("I=%.0f J=%.0f\n",i/10,j/10);
			}
			else{
				printf("I=%.1f J=%.1f\n",i/10,j/10);
			}
			--Concert;
			if(Concert == 0){
				Concert = 15;
			}
		}
		cont += 2;
	}
    return 0;
}