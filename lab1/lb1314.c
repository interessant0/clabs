#include <stdio.h>
int main(){
    printf("Celsius to Fahrenheit thermometer");
    float  fahr,celsius;
    int lower,upper,step;

    lower=0;
    upper=100;
    step=5;

    celsius=lower;
    printf("celsius\tfahr\n");
    while (celsius<=upper){
        fahr=(celsius*9.0)/5.0+32.0;
        printf("%3.0f%6.1f\n",fahr,celsius);
        celsius=celsius+step;
    }
}