#include <stdio.h>
int main()
{
//floats
    float weight;
    float height;
    float bmi;

    printf("Enter your body weight in KILLOGRAM: \n");
    scanf("%f", &weight);
    getchar();
    printf("Enter your body height in CENTIMETER: \n");
    scanf("%f", &height);
    getchar();
    bmi = weight*100 / (height*height)*100;
    printf("Your BMI is %.1f \n", bmi);
if (bmi < 20) {
    printf("You are underweighted\n");
}
if (bmi > 20, bmi <25) {
    printf("You are normal\n");
}
if (bmi >25){
    printf("You are overweighted\n");
}
    return 0;
}
