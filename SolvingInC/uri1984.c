#include<stdio.h>
int main(){
	int i;
	char String[100];
	scanf("%[^\n]", String);
	while(getchar() != '\n');
	for(i = 0;String[i] != '\0'&&(String[i] >= '0'&&String[i] <= '9');++i);
	for(i = i-1;i >= 0;--i){
			printf("%c",String[i]);
	}
	printf("\n");
	return 0;
}