#include <stdio.h>
int main()
{
float weight;
float height;
float bmi;

//set weight rules (>=30) + basic codes   
while (weight < 30){
printf("Enter your body weight in KILLOGRAM: \n");
    scanf("%f", &weight);
    getchar();
printf("Please enter a vaild amount\n");
}
while (weight =30, weight >30){
printf("Enter your body weight in KILLOGRAM: \n");
    scanf("%f", &weight);
    getchar();
}
//set rules of height (>=100) + basic codes
while (height < 100) {
printf("Enter your body height in CENTIMETER: \n");
    scanf("%f", &height);
getchar();
printf("Please enter a vaild amount\n");
}
while (height = 100, height >100) {
printf("Enter your body height in CENTIMETER: \n");
    scanf("%f", &height);
getchar();
}
    bmi = weight*100 / (height*height)*100;
    printf("Your BMI is %.1f \n", bmi);
return 0;
}
