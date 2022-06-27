#include <stdio.h>

int main() {
	int i;
	char String[51] = {"AMO FAZER EXERCICIO NO URI"};
	for(i = 0; i < 8;++i){
		printf("<");
		if(i == 0){
			printf("%s",String);
		}
		else if(i == 1){
			printf("%30s",String);
		}
		else if(i == 2){
			printf("%.20s",String);
		}
		else if(i == 3){
			printf("%-20s",String);
		}
		else if(i == 4){
			printf("%-30s",String);
		}
		else if(i == 5){
			printf("%.30s",String);
		}
		else if(i == 6){
			printf("%30.20s",String);
		}
		else if(i == 7){
			printf("%-30.20s",String);
		}
		printf(">\n");
	}

	return 0;
}