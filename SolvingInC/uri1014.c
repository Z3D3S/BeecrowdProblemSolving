#include <stdio.h>
 
int main() {
    int DS;
    float DT,CONS;
    scanf("%d %f",&DS,&DT);
     CONS = DS/DT;
    printf("%.3f km/l\n", CONS);
    return 0;
}