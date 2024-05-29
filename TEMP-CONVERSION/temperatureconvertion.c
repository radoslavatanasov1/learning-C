#include <stdio.h>

int main(){
    float temp;
    int degree;
    float temporary;

    printf("Pick\n");
    printf("1. C to F\n");
    printf("2. F to C\n");
    scanf("%d", &degree);


    switch (degree)
    {
    case 1:
        printf("Enter C degres> ");
        scanf("%f", &temp);
        temporary = (1.8 * temp) + 32;
        printf("\nResult C to F: %.2f\n", temporary);
        printf("\n MADE BY RADOSLAV A.\n");

        break;
    
    case 2:
        printf("Enter F degres> ");
        scanf("%f", &temp);
        temporary = (temp - 32) / 1.8;
        printf("\nResult F to C: %.2f\n", temporary);

        printf("\n MADE BY RADOSLAV A.\n");
        break;

    default:
        printf("Pick only 1 or 2 (C or F)\n");
        break;
    }

    return 0;

}