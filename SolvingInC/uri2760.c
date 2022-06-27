#include <stdio.h>

int main() {
	int i;
	char String1[110],String2[110],String3[110];
	scanf("%[^\n] %[^\n] %[^\n]",String1,String2,String3);
	printf("%s%s%s\n",String1,String2,String3);
	printf("%s%s%s\n",String2,String3,String1);
	printf("%s%s%s\n",String3,String1,String2);
	for(i = 0;String1[i] != '\0'&&i < 10;++i){
		printf("%c",String1[i]);
	}
	for(i = 0;String2[i] != '\0'&&i < 10;++i){
		printf("%c",String2[i]);
	}
	for(i = 0;String3[i] != '\0'&&i < 10;++i){
		printf("%c",String3[i]);
	}
	printf("\n");
	return 0;
}