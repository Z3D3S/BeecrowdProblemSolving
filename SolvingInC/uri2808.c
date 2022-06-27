#include <stdio.h>
#include <math.h>

int main() {
	int i = 0,x,y,N = 3,X[4],Y[4];
	char String[4];
	while(--N){
		scanf("%s",String);
		if(String[0] == 'a'){
			x = 0;
		}
		else if(String[0] == 'b'){
			x = 1;
		}
		else if(String[0] == 'c'){
			x = 2;
		}
		else if(String[0] == 'd'){
			x = 3;
		}
		else if(String[0] == 'e'){
			x = 4;
		}
		else if(String[0] == 'f'){
			x = 5;
		}
		else if(String[0] == 'g'){
			x = 6;
		}
		else{
			x = 7;
		}
		if(String[1] == '1'){
			y = 0;
		}
		else if(String[1] == '2'){
			y = 1;
		}
		else if(String[1] == '3'){
			y = 2;
		}
		else if(String[1] == '4'){
			y = 3;
		}
		else if(String[1] == '5'){
			y = 4;
		}
		else if(String[1] == '6'){
			y = 5;
		}
		else if(String[1] == '7'){
			y = 6;
		}
		else{
			y = 7;
		}
		X[i] = x;
		Y[i] = y;
		++i;
	}
	if((fabs(X[0]-X[1]) == 2&&fabs(Y[0]-Y[1]) == 1)||(fabs(X[0]-X[1]) == 1&&fabs(Y[0]-Y[1]) == 2)){
		printf("VALIDO\n");
	}
	else{
		printf("INVALIDO\n");
	}
	return 0;
}