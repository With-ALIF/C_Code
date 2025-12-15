#include<stdio.h>
int main()
{
    char  name[50];
    int unit;
    double charge, total;

    printf("Ente user name:");
    scanf("%s", name);

    printf("Number of units in integer value ");
    scanf("%d", &unit);

    if (unit <= 200)
        charge = unit * 0.80;

    else if(unit <= 300)
        charge = (200*0.80) + ((unit - 200)* 90);

    else
        charge = (200 * 0.80) + (100 * 0.90) + ((unit - 300)*1.00);

    if(charge < 100)
        charge = 100;

    if(charge > 400)
            charge += charge * 0.15;

        printf("User Name: %s\n", name);
        printf("Total Bill: %0.2lf\n", charge);

        return 0;


}
