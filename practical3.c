#include <stdio.h>

int main()
{
    float weight, height, bmi;

    printf("Enter weight in kilograms: ");
    scanf("%f", &weight);

    printf("Enter height in meters: ");
    scanf("%f", &height);

    if (weight <= 0 || height <= 0)
    {
        printf("Error: Weight and height must be positive values.\n");
        return 1;
    }

    bmi = weight / (height * height);

    printf("\n BMI Result \n");
    printf("Weight: %.2f kg\n", weight);
    printf("Height: %.2f m\n", height);
    printf("BMI   : %.2f\n", bmi);

    if (bmi < 18.5)
    {
        printf("Category: Underweight\n");
    } else if (bmi >= 18.5 && bmi < 25)
    {
        printf("Category: Normal weight\n");
    } else if (bmi >= 25 && bmi < 30)
    {
        printf("Category: Overweight\n");
    } else
    {
        printf("Category: Obese\n");
    }

    return 0;
}
