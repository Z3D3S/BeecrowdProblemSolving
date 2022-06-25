#include <stdio.h>

int main(){
	int Sum,d,Numero1,Numero2,X,k,i;
	char Nome1[100],Nome2[100],YP[3] = {"PAR"},YI[5] = {"IMPAR"},Y1[10],Y2[10];
	scanf("%d",&X);
	++X;
	while(--X){
		k = 0;
		d = 0;
		scanf("%s %s",Nome1,Y1);
		scanf("%s %s",Nome2,Y2);
		for(i = 0; Y1[i] != '\0';++i){
			if(Y1[i] == YP[i]){
				++k;
			}
			if(Y1[i] == YI[i]){
				++k;
			}
		}

		for(i = 0; Y2[i] != '\0';++i){
			if(Y2[i] == YP[i]){
				++d;
			}
			if(Y2[i] == YI[i]){
				++d;
			}
		}
		if(k == 3){
			k = 0;
		}
		else{
			k = 1;
		}
		if(d == 3){
			d = 0;
		}
		else{
			d = 1;
		}
		scanf("%d %d",&Numero1,&Numero2);
		Sum = Numero1+Numero2;
		if(Sum % 2 == 0&&k == 0&&d == 1){
			printf("%s\n",Nome1);
		}
		else if(Sum % 2 ==1&&k == 1&&d == 0){
			printf("%s\n",Nome1);
		}
		else if(Sum % 2 == 0&&d == 0&&k == 1){
			printf("%s\n",Nome2);
		}
		else if(Sum % 2 == 1&&d == 1&& k == 0){
			printf("%s\n",Nome2);
		}
	}
	return 0;
}