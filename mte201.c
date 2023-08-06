#include <stdio.h>
// OYEKUNLE DANIEL OLUWASEUN
// MTE/2021/1086
// MTE 201

int main() {
    float weight, height, bmi;

    printf("Welcome to OYEKUNLE_DANIEL HOSPITAL BMI Calculator\n");

    printf("-----------------------------------------------\n");

    printf("Please enter your weight in kilograms(kg): ");
    scanf("%f", &weight);

    printf("Please enter your height in meters(m): ");
    scanf("%f", &height);

    bmi = weight / (height * height);

    printf("-----------------------------------------------\n");

    printf("Thank you for using our BMI Calculator!\n");
    printf("Your Body Mass Index(BMI) is: %.3f\n", bmi);

    printf("BMI Classification:\n");
    if (bmi < 18.5) {
        printf("Your BMI Category is: Underweight\n");
    } else if (bmi < 25) {
        printf("Your BMI Category is: Normal Weight\n");
    } else if (bmi < 30) {
        printf("Your BMI Category is: Overweight\n");
    } else {
        printf("Your BMI Category is: Obesity\n");
    }

    return 0;
}
