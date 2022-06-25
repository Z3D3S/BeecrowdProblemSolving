#include <stdio.h>
 
int main() {
	int X,cont = 1,h,i;
	char StringS[100],StringJ[100];
	scanf("%d",&X);
	while(getchar() != '\n');
	++X;
	while(--X){
		scanf("%s %s",StringS,StringJ);
		while(getchar() != '\n');
		h = 0;
		for(i=0;StringS[i] != '\0'&&StringJ[i] != '\0';++i){
			if(StringS[i] == StringJ[i]){
				++h;
			}
		}
		if(h == i){
			printf("Caso #%d: De novo!\n",cont);
		}
		if(StringS[3] == 'r'&&(StringJ[4] == 'u'||StringJ[5] == 't')){	
			printf("Caso #%d: Bazinga!\n",cont);
		}
		if(StringS[4] == 'l'&&(StringJ[4] == 'k'||StringJ[3] == 'r')){
			printf("Caso #%d: Bazinga!\n",cont);
		}
		if(StringS[4] == 'u'&&(StringJ[4] == 'l'||StringJ[5] =='t')){
			printf("Caso #%d: Bazinga!\n",cont);
		}
		if(StringS[5] == 't'&&(StringJ[4] == 'k'||StringJ[4] == 'l')){
			printf("Caso #%d: Bazinga!\n",cont);
		}
		if(StringS[4] == 'k'&&(StringJ[4] == 'u'||StringJ[3] == 'r')){
			printf("Caso #%d: Bazinga!\n",cont);
		}
		if(StringJ[3] == 'r'&&(StringS[4] == 'u'||StringS[5] == 't')){
			printf("Caso #%d: Raj trapaceou!\n",cont);	
		}
		if(StringJ[4] == 'l'&&(StringS[4] == 'k'||StringS[3] == 'r')){
			printf("Caso #%d: Raj trapaceou!\n",cont);	
		}
		if(StringJ[4] == 'u'&&(StringS[4] == 'l'||StringS[5] =='t')){
			printf("Caso #%d: Raj trapaceou!\n",cont);	
		}
		if(StringJ[5] == 't'&&(StringS[4] == 'k'||StringS[4] == 'l')){
			printf("Caso #%d: Raj trapaceou!\n",cont);	
		}
		if(StringJ[4] == 'k'&&(StringS[4] == 'u'||StringS[3] == 'r')){
			printf("Caso #%d: Raj trapaceou!\n",cont);	
		}
		++cont;
	}
    return 0;
}