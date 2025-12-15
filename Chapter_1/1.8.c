#include<stdio.h>
int main()
{

    int a1=250, b1=85, c1=25;
    int a2=300, b2=70, c2=70;

    if(b1 - c1 != 0){
        printf("For(a=250, b=85, c=25), x = %d\n", (a1/(b1-c1)));
    }
    else{
        printf("For(a=250, b=85, c=25), Division  by zero error.\n");

    }

    if(b2 - c2 != 0){
        printf("For(a=300, b==70, c=70), x = %d\n", (a2/(b2-c2)));

    }
    else{
        printf("For(a=300, b==70, c=70), Division by zero error.\n");
    }

    return 0;
}
