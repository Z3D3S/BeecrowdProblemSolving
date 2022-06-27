#include <stdio.h>

int main() {
	int Dump;
	char StringDodo[10],StringLeo[10],StringPepper[10];
	while(scanf("%s %s %s",StringDodo,StringLeo,StringPepper) != EOF){
		Dump = 0;
		if((StringDodo[4] == 'l'&&StringLeo[3] == 'r'&&StringPepper[3] == 'r')){
				printf("Os atributos dos monstros vao ser inteligencia, sabedoria...\n");
				Dump = 1;
		}
		else if(StringDodo[3] == 'r'&&StringLeo[0] == 't'&&StringPepper[0] == 't'){
			printf("Os atributos dos monstros vao ser inteligencia, sabedoria...\n");
			Dump = 1;
		}
		else if(StringDodo[0] == 't'&&StringLeo[4] == 'l'&&StringPepper[4] =='l'){
			printf("Os atributos dos monstros vao ser inteligencia, sabedoria...\n");
			Dump = 1;
		} 
		else if((StringLeo[4] == 'l'&&StringDodo[3] == 'r'&&StringPepper[3] == 'r')){
				printf("Iron Maiden's gonna get you, no matter how far!\n");
				Dump = 1;
		}
		else if(StringLeo[3] == 'r'&&StringDodo[0] == 't'&&StringPepper[0] == 't'){
			printf("Iron Maiden's gonna get you, no matter how far!\n");
			Dump = 1;
		}
		else if(StringLeo[0] == 't'&&StringDodo[4] == 'l'&&StringPepper[4] =='l'){
			printf("Iron Maiden's gonna get you, no matter how far!\n");
			Dump = 1;
		}
		else if((StringPepper[4] == 'l'&&StringLeo[3] == 'r'&&StringDodo[3] == 'r')){
			printf("Urano perdeu algo muito precioso...\n");
			Dump = 1;
		}
		else if(StringPepper[3] == 'r'&&StringLeo[0] == 't'&&StringDodo[0] == 't'){
			printf("Urano perdeu algo muito precioso...\n");
			Dump = 1;
		}
		else if(StringPepper[0] == 't'&&StringLeo[4] == 'l'&&StringDodo[4] == 'l'){
			printf("Urano perdeu algo muito precioso...\n");
			Dump = 1;
		}
		else if(StringDodo[4] == 'l'&&StringLeo[3] == 'r'&&StringPepper[0] == 't'){
			Dump = 1;
			printf("Putz vei, o Leo ta demorando muito pra jogar...\n");
		}
		else if(((StringDodo[3] == StringPepper[3])||(StringDodo[3] == StringLeo[3])||(StringLeo[3] == StringPepper[3]))&&Dump != 1){
			printf("Putz vei, o Leo ta demorando muito pra jogar...\n");
		}
		else{
			if(Dump != 1){
			printf("Putz vei, o Leo ta demorando muito pra jogar...\n");		
			}
		}
	}
	return 0;
}