#include<stdio.h>

int main(){
	int X;
	double Y,Mufunfa = 0;
	char String[4];
	scanf("%d",&X);
	while(getchar() != '\n');
	++X;
	while(--X){
		scanf("%s %lf",String,&Y);
		while(getchar() != '\n');
		if(String[3] == '1'){
			Y =  (Y*3)/2;
		}
		if(String[3] == '2'){
			Y = (Y*5)/2;
		}
		if(String[3] == '3'){
			Y = (Y*7)/2;
		}
		if(String[3] == '4'){
			Y = (Y*9)/2;
		}
		if(String[3] == '5'){
			Y = (Y*11)/2;
		}
		Mufunfa += Y;
	}
	printf("%.2lf\n",Mufunfa);
	return 0;
}