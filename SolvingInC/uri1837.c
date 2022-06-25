#include <stdio.h>

int main(){
	int x,y,A,B;
	scanf("%d %d",&x,&y);
	if(x % y != 0&&x < 0){
		A = (x/y)-1; 
	}
	else{
		A = (x/y);
	}
	B = x % y;
	if(B < 0){
		B = (A*y)-x;
		B *= -1;
	}
	if(x < 0&& y < 0&&x % y != 0){
		A = (x/y)+1;
		B = x-(A*y);
	}
	printf("%d ",A);
	printf("%d\n",B);

	return 0;
}