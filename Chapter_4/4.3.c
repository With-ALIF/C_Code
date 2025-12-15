#include<stdio.h>
int main()

{
        float a, b, c, d;
        printf("Intput four floating numbers: ");

        scanf("%f %f %f %f", &a, &b, &c, &d);

        int p, q, r, s;

        p = round(a);
        q = round(b);
        r = round(c);
        s = round(d);

        printf("ROUNDED VALUES: %d %d %d %d", p, q, r, s);

        return 0;

}

