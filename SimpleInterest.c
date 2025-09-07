#include <stdio.h>
#include <math.h>

int main() {
    float principle, rate, time;
    float si, ci;

    printf("Enter the principle:\n");
    scanf("%f", &principle);

    printf("Enter the rate:\n");
    scanf("%f", &rate);

    printf("Enter the time:\n");
    scanf("%f", &time);

    si = (principle * rate * time) / 100;
    ci = principle * (pow((1 + rate / 100), time)) - principle;

    printf("Simple Interest: %.2f\n", si);
    printf("Compound Interest: %.2f\n", ci);

    return 0;
}
