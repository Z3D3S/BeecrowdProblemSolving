#include <stdio.h>

int main() {
	int i,cont;
	char String1[22],String2[22];
	scanf("%s",String1);
	scanf("%s",String2);
	for(i = 0;String1[i] != '\0'||String2[i] != '\0';++i){
		cont = 0;
		if(String1[i] == '\0'){
			printf("%s\n",String1);
			printf("%s\n",String2);
			break;
		}
		else if(String2[i] == '\0'){
			printf("%s\n",String2);
			printf("%s\n",String1);
			break;
		}
		else if(String1[i] < String2[i]){
			printf("%s\n",String1);
			printf("%s\n",String2);
			break;
		}
		else if(String1[i] > String2[i]){
			printf("%s\n",String2);
			printf("%s\n",String1);
			break;
		}
		else{
			cont = 1;
		}
	}
	if(cont){
		printf("%s\n",String1);
		printf("%s\n",String2);
	}

	return 0;
}