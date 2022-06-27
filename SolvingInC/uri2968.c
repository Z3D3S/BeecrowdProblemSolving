#include <stdio.h>
#include <math.h>

int main() {
	int Voltas,Placas,i;
	double resu;
	 scanf("%d %d",&Voltas,&Placas);
	 for(i = 1;i <= 9;++i){
	 	resu = Voltas*Placas;
	 	resu = resu*(i*10)/100;
	 	resu = ceil(resu);
	 	printf("%.lf",resu);
	 	if(i < 9){
	 		printf(" ");
	 	}

	 }
	 printf("\n");
	return 0;
}