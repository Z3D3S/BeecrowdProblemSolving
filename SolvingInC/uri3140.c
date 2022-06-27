#include <stdio.h>
#include <string.h>

int main() {
	char String[1010],Stringaux[1010];
	int campton = 0,i,j,primeiro;
	while(scanf("%1000[^\n]",String) != EOF){
		primeiro = 1;
		getchar();
		j = 0;
		i = 0;
		while(String[i] != '\0'){
			if(String[i] != ' '){
				Stringaux[j] = String[i];
				++j;
				if(String[i] == '>'){
					break;
				}
			}
			++i;
		}
		Stringaux[j] = '\0';
		if(strcmp(Stringaux,"</body>") == 0){
				break;	
		}
		if(strcmp(Stringaux,"<body>") == 0){
				primeiro = 0;
				campton = 1;	
		}
		if(campton&&primeiro){
			printf("%s\n",String);
		}
	}
	return 0;
}