#include <stdio.h>
 
int main() {
	float S = 0,i,g,conta = 1;
	for(i = 3,g = 0;i <= 39;i = i+2,g = g+2){
		if(i == 3){
			S = 2;
		}
		else{
			S = (2*S);
		}
		conta += (i/S);
	}
	printf("%.2f\n",conta);
    return 0;
}