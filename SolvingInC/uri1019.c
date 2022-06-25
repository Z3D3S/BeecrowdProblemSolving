#include <stdio.h>

int main() {

    int Tempo;
    scanf("%d",&Tempo);
    printf("%d:%d:%d\n", Tempo/3600,(Tempo%3600)/60,((Tempo%3600) % 60));

    return 0;
}
