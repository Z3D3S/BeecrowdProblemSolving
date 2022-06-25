#include <stdio.h>
 
int main() {
	int i,j,cont = 0;
	for(i = 1;i < 10;i = i+2){
		for(j = 7+cont;j > 4+cont;--j){
			printf("I=%d J=%d\n",i,j);
		}
		cont += 2;
	}
    return 0;
}