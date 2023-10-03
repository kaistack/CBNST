#include<stdio.h>

float roundd(float n) {
    return ((int)(n * 100 + 0.5)) / 100.0;
}

int main() {
    float true_val, obs_val;
    printf("Enter the true value: ");
    scanf("%f",&true_val);
    printf("Enter the observed value: ");
    scanf("%f",&obs_val);

    float abs_error = true_val - obs_val;
    float real_error = abs_error / true_val;
    float pre_error = real_error * 100;

    printf("Absolute error: %f \n",abs_error);
    printf("Relative error: %f \n",real_error);
    printf("Percentage error: %f \n",pre_error);
    printf("Rounded absolute error: %0.2f \n",roundd(abs_error));
    printf("Rounded real error: %0.2f \n",roundd(real_error));
    printf("Rounded percentage error: %0.2f \n",roundd(pre_error));

    return 0;
}
