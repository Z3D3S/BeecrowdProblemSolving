#include <stdio.h>

int main() {
	int Num_passaegeiros,cont = 0,num_jipe = 0;
	char String[10];

	while(String[0] != 'A'||String[1] != 'B'||String[2] != 'E'||String[3] != 'N'||String[4] != 'D'){
		scanf("%s %d",String ,&Num_passaegeiros);
		if(String[0] == 'S'&&String[1] == 'A'&&String[2] == 'L'&&String[3] == 'I'&&String[4] == 'D'&&String[5] == 'A'){
			cont = cont + Num_passaegeiros;
			++num_jipe;
		}
		if(String[0] == 'V'&&String[1] == 'U'&&String[2] == 'E'&&String[3] == 'L'&&String[4] == 'T'&&String[5] == 'A'){
			cont = cont - Num_passaegeiros;
			--num_jipe;
		}
	}
	printf("%d\n",cont);
	printf("%d\n",num_jipe);

	return 0;
}