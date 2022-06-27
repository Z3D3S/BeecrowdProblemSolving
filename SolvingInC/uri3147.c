#include <stdio.h>

int main() {
	int H,E,A,O,W,X,bem,mal;
	scanf("%d %d %d %d %d %d",&H,&E,&A,&O,&W,&X);
	bem = H+E+A+X;
	mal = O+W;
	if (mal > bem){
		printf("Sauron has returned.\n");
	}
	else{
		printf("Middle-earth is safe.\n");
	}	

	return 0;
	
}