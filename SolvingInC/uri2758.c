#include <stdio.h>

int main() {
	int i;
	float X1,X2;
	double X3,X4;
	scanf("%f %f",&X1,&X2);
	scanf("%lf %lf",&X3,&X4);
		for(i = 0; i < 6;++i){
		if(i == 0){
			printf("A = %.6f, B = %.6f\n",X1,X2);
			printf("C = %.6lf, D = %.6lf\n",X3,X4);
		}
		if(i == 1){
			printf("A = %.1f, B = %.1f\n",X1,X2);
			printf("C = %.1lf, D = %.1lf\n",X3,X4);
		}
		if(i == 2){
			printf("A = %.2f, B = %.2f\n",X1,X2);
			printf("C = %.2lf, D = %.2lf\n",X3,X4);
		}
		if(i == 3){
			printf("A = %.3f, B = %.3f\n",X1,X2);
			printf("C = %.3lf, D = %.3lf\n",X3,X4);
		}
		if(i == 4){
			printf("A = %.3E, B = %.3E\n",X1,X2);
			printf("C = %.3E, D = %.3E\n",X3,X4);

		}
		if(i == 5){
			printf("A = %0.f, B = %0.f\n",X1,X2);
			printf("C = %0.lf, D = %0.lf\n",X3,X4);
		}
	}
	
	

	return 0;
}