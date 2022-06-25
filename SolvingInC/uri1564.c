#include <stdio.h>
 
int main() {
	int X;
	while(scanf("%d",&X) != EOF){
		if(X == 0){
			printf("vai ter copa!\n");
		}
		else{
			printf("vai ter duas!\n");
		}
	}

    return 0;
}