#include <stdio.h>

int main() {

    int Dias;
    scanf("%d",&Dias);
    printf("%d ano(s)\n", Dias/365);
    Dias -= (Dias/365)*365;
    printf("%d mes(es)\n", Dias/30);
    Dias -= (Dias/30)*30;
    printf("%d dia(s)\n", Dias);

    return 0;
}