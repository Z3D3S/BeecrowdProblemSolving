#include <stdio.h>
int main(){
	int X,Y,Z,Sum;
	scanf("%d",&X);
	scanf("%d",&Y);
	scanf("%d",&Z);
	Sum = X+Y+Z;
	if(Sum < 0){
		Sum = Sum*-1;
		Sum = 24-Sum;
	}
	else if(Sum >= 24){
		Sum = X+Y+Z-24;

	}
	printf("%d\n",Sum);
	return 0;
}