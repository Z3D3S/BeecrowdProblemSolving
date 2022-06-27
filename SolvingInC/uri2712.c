#include <stdio.h>


int main() {
	int N;
	char String[110];
	scanf("%d",&N);
	++N;
	while(--N){
		scanf("%s",String);
		if(String[8] == '\0'){
			if(String[0] >= 'A'&& String[0] <= 'Z'){
				if(String[1] >= 'A'&& String[1] <= 'Z'){
					if(String[2] >= 'A'&& String[2] <= 'Z'){
						if(String[3] == '-'){
							if(String[4] >= '0'&& String[4] <= '9'){
								if(String[5] >= '0'&& String[5] <= '9'){
									if(String[6] >= '0'&& String[6] <= '9'){
										if(String[7] == '1'||String[7] == '2'){
											printf("MONDAY\n");
										}
										else if(String[7] == '3'||String[7] == '4'){
											printf("TUESDAY\n");
										}
										else if(String[7] == '5'||String[7] == '6'){
											printf("WEDNESDAY\n");
										}
										else if(String[7] == '7'||String[7] == '8'){
											printf("THURSDAY\n");
										}
										else if(String[7] == '9'||String[7] == '0'){
											printf("FRIDAY\n");
										}
										else{
											printf("FAILURE\n");
										}
									}
									else{
										printf("FAILURE\n");
									}
								}
								else{
									printf("FAILURE\n");
								}
							}
							else{
								printf("FAILURE\n");
							}
						}
						else{
							printf("FAILURE\n");
						}
					}
					else{
						printf("FAILURE\n");
					}
				}
				else{
					printf("FAILURE\n");
				}
			}
			else{
				printf("FAILURE\n");
			}
		}
		else{
			printf("FAILURE\n");	
		}
	}		
	return 0;
}