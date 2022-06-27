#include <stdio.h>

int main() {
	int i,j;
	char String1[1000],String2[1000],String3[1000];
	scanf("%[^\n]",String1);
	for(i = 0,j = 0;String1[i] != '.';++i,++j){
		if(String1[i] == '0'&&i == 0){
			for(i = i;String1[i] == '0'&&String1[i+1] != '.';++i);
		}
		String2[j] = String1[i];
	}
	String2[j] = '\0';
	for(i = i+1,j = 0;String1[i] != '\0';++i,++j){
		if(String1[i] == '0'&&String1[i-1] == '.'){
			for(i = i;String1[i] == '0'&&String1[i+1] != '\0';++i);
		}
		String3[j] = String1[i];
	}
	String3[j] = '.';
	String3[j+1] = '\0';
	printf("%s%s\n",String3,String2);

	return 0;
}