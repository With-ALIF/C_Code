#include<stdio.h>
#include<math.h>

int main(){
    float l, r, c,v, frequency;

    printf("Enter Inductance(L): ");
    scanf("%f", &l);

    printf("Enter Resistance(R): ");
    scanf("%f", &r);

    printf("\nC (Farad)\tFrequency (Hz)\n");
    printf("----------------------------\n");

    for(c = 0.01; c<=0.1; c+=0.01){
        v =((1/(l*c)) - ((r*r)/(4*c*c)));
        if(v < 0){

        printf("%.2f\t\tNOT DEFINE\n", c);
        }
            else{
                    frequency = sqrt(v);
                printf("%.2f\t\t%.2f\n", c, frequency);
            }
    }



    return 0;

}

