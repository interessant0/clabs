#include <stdio.h>
int main(){
    print("Celsius to Fahrenheit thermometer");
    int fahr,celsius;
    int lower,upper,step;

    lower=0;
    upper=100;
    step=20;

    celsius=lower;
    while (celsius<=upper){
        fahr=(celsius*9/15+32);
        printf("%3.0f %6.1f\n",fahr,celsius);
        celsius=celsius+step;
    }
}