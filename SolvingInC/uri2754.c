#include <stdio.h>
#include <string.h>

int main() {
	int i;
	double X1,X2;
	X1 = 234.345;
	X2 = 45.698;
	for(i = 0; i < 7;++i){
		if(i == 0){
			printf("%.6lf - %.6lf\n",X1,X2);
		}
		if(i == 1){
			printf("%0.lf - %.0lf\n",X1,X2);
		}
		if(i == 2){
			printf("%.1lf - %.1lf\n",X1,X2);
		}
		if(i == 3){
			printf("%.2lf - %.2lf\n",X1,X2);
		}
		if(i == 4){
			printf("%.3lf - %.3lf\n",X1,X2);
		}
		if(i == 5){
			printf("%.6e - %.6e\n",X1,X2);
		}
		if(i == 6){
			printf("%.6E - %.6E\n",X1,X2);
		}
	}
	printf("%g - %g\n",X1,X2);
	printf("%g - %g\n",X1,X2);
	

	return 0;
}