#include <stdio.h>
int main()
{
    double A;
    scanf ("%lf",&A);
    printf ("NOTAS:\n");
    printf ("%d nota(s) de R$ 100.00\n",(int) A/100);
    A -= (int)(A/100)*100;
    printf ("%d nota(s) de R$ 50.00\n",(int) A/50);
    A -= (int)(A/50)*50;
    printf ("%d nota(s) de R$ 20.00\n",(int) A/20);
    A -= (int)(A/20)*20;
    printf ("%d nota(s) de R$ 10.00\n",(int) A/10);
    A -= (int)(A/10)*10;
    printf ("%d nota(s) de R$ 5.00\n",(int) A/5);
    A -= (int)(A/5)*5;
    printf ("%d nota(s) de R$ 2.00\n",(int) A/2);
    A -= (int)(A/2)*2;
    printf ("MOEDAS:\n");
    A *= 100;
    printf ("%d moeda(s) de R$ 1.00\n",(int) A/100);
    A -= (int)(A/100)*100;
    printf ("%d moeda(s) de R$ 0.50\n",(int) A/50);
    A -= (int)(A/50)*50;
    printf ("%d moeda(s) de R$ 0.25\n",(int)A/25);
    A -= (int)(A/25)*25;
    printf ("%d moeda(s) de R$ 0.10\n",(int)A/10);
    A -= (int)(A/10)*10;
    printf ("%d moeda(s) de R$ 0.05\n",(int)A/5);
    A -= (int)(A/5)*5;
    printf ("%d moeda(s) de R$ 0.01\n",(int)A);
    return 0;
}
