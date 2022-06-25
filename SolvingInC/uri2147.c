#include<stdio.h>

int main(){
	int i,C;
	double Number;
	char String[1000000];
	scanf("%d",&C);
	while(getchar() != '\n');
	C = C+1;
	while(--C){
		scanf("%s",String);
		for(i = 0; String[i] != '\0';++i);
		Number = i;
		printf("%.2lf\n",Number/100);
	}

	return 0;
}