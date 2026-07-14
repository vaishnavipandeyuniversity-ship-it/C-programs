#include <stdio.h>

int main(void) {
    double BMI, WHtR, WHR, Waistcircumference, hipcircumference, Height, Weight;
    int age;
    printf("Enter the Waistcircumference(in cm),Height(in m),Weight(in kg),age: ");
    scanf("%lf,%lf,%lf,%d", &Waistcircumference, &Height, &Weight, &age);

    printf("Body Mass Index");
    printf("\n");
    BMI = Weight / (Height * Height);
    printf("%.2f\n", BMI);

    printf("Waist to height ratio");
    printf("\n");
    WHtR = Waistcircumference / Height;
    printf("%.2f\n", WHtR);

    printf("Waist to Hip ratio");
    printf("\n");
    WHR = Waistcircumference / hipcircumference;
    printf("%.2f\n", WHR);
    
    return 0;

    printf("enter the choice: ");
    scanf("%d", &choice);
    switch (choice) {
        case 1:
            if (BMI < 18.5) {
                printf("Underweight\n");
            } else if (BMI >= 18.5 && BMI < 24.9) {
                printf("Normal weight\n");
            } else if (BMI >= 25 && BMI < 29.9) {
                printf("Overweight\n");
            } else {
                printf("Obesity\n");
            }
            break;
        case 2:
            if (WHtR < 0.5) {
                printf("Low risk\n");
            } else if (WHtR >= 0.5 && WHtR < 0.6) {
                printf("Moderate risk\n");
            } else {
                printf("High risk\n");
            }
            break;
        case 3:
            if (WHR < 0.8) {
                printf("Low risk\n");
            } else if (WHR >= 0.8 && WHR < 0.9) {
                printf("Moderate risk\n");
            } else {
                printf("High risk\n");
            }
            break;
        default:
            printf("Invalid choice\n");
    }
}