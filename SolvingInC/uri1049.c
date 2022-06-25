#include <stdio.h>
#include<string.h>

int main() {
	char Stringfilo[2][15] = {"vertebrado","invertebrado"};
	char Stringanimal[4][15] = {"ave","mamifero","inseto","anelideo"};
	char Stringdieta[8][15] = {"carnivoro","onivoro","onivoro","herbivoro","hematofago","herbivoro","hematofago","onivoro"};
	char String1[15],String2[15],String3[15];
    scanf("%s", String1);
	int prop1 = strcmp(String1,Stringfilo[0]);
    if(prop1 == 0){
        scanf("%s", String2);
        int prop2 = strcmp(String2,Stringanimal[0]);
        if(prop2 == 0){
            scanf("%s", String3);
            int prop3 = strcmp(String3,Stringdieta[0]);
            if(prop3 == 0){
                printf("aguia\n");
            }
            else{
                printf("pomba\n");
            }
        }
        else{
            scanf("%s", String3);
            int prop3 = strcmp(String3,Stringdieta[2]);
            if(prop3 == 0){
                printf("homem\n");
            }
            else{
                printf("vaca\n");
            }
        }
    }
    else{
        scanf("%s", String2);
        int prop2 = strcmp(String2,Stringanimal[2]);
        if(prop2 == 0){
            scanf("%s", String3);
            int prop3 = strcmp(String3,Stringdieta[4]);
            if(prop3 == 0){
                printf("pulga\n");
            }
            else{
                printf("lagarta\n");
            }
        }
        else{
            scanf("%s", String3);
            int prop3 = strcmp(String3,Stringdieta[6]);
            if(prop3 == 0){
                printf("sanguessuga\n");
            }
            else{
                printf("minhoca\n");
            }
        }
    }
    return 0;
}
