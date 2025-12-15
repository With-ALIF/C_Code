#include<stdio.h>
#include<math.h>

#define pi 3.14159265
int main()
{
    printf("Angle (degrees) sin        cos\n");

    for (int ang = 0; ang<=180; ang += 15){
        double radians = ang * pi /180;
        double sinevalue = sin(radians);
        double cosevalue = cos(radians);


        printf("%5d      %7.4lf    %7.4lf\n", ang, sinevalue, cosevalue);
    }

    return 0;

}
