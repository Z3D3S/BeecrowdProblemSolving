#include <stdio.h>
#include <math.h>
#include <string.h>
int main() {
	int j,i;
	char String[20];
	double resu;
	while(scanf("%s",String) != EOF){
		resu = 0;
		j = strlen(String);
		--j;
		for(i = 0;String[i] != '\0';++i){
			resu = resu + (String[i]-'0')*pow(10,j);
			--j;
		}
		resu /= 100;
		printf("%.lf\n",ceil(resu));
	}
	return 0;
}