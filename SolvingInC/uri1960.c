#include <stdio.h>

int main(){
	int X,i = 0,cont;
	char String[100];
	scanf("%d",&X);
	while(X != 0){
		if(X >= 900){
			X-= 900;
			String[i] = 'C';
			++i;
			String[i] = 'M';
		}
		else if(X >= 500){
			X -= 500;
			String[i] = 'D';
		}
		else if(X >= 400){
			X-= 400;
			String[i] = 'C';
			++i;
			String[i] = 'D';
		}
		else if(X >= 100){
			X -= 100;
			String[i] = 'C';
		}
		else if(X >= 90){
			X-= 90;
			String[i] = 'X';
			++i;
			String[i] = 'C';
		}
		else if(X >= 50){
			X -= 50;
			String[i] = 'L';
		}
		else if(X >= 40){
			X-= 40;
			String[i] = 'X';
			++i;
			String[i] = 'L';
		}
		else if(X >= 10){
			X -= 10;
			String[i] = 'X';
		}
		else if(X >= 9){
			X-= 9;
			String[i] = 'I';
			++i;
			String[i] = 'X';
		}
		else if( X >= 5){
			X -= 5;
			String[i] = 'V';
		}
		else if(X >= 4){
			X-= 4;
			String[i] = 'I';
			++i;
			String[i] = 'V';
		}
		else{
			X -= 1;
			String[i] = 'I';
		}
		++i;
	}
	cont = i;
	for(i = 0;i < cont;++i){
		printf("%c",String[i]);
	}
	printf("\n");
	return 0;
}