#include <stdio.h>
#include <math.h>

int main(){
    int x1,x2,y2,y1;
    double distance;


    // Input Cords
    printf("Enter x1> ");
    scanf("%d", &x1);

    printf("Enter x2> ");
    scanf("%d", &x2);
    
    printf("Enter y1> ");
    scanf("%d", &y1);
    
    printf("Enter y2> ");
    scanf("%d", &y2);

    // calculate distance x2 - x1 ^2 + y2 - y1 ^ 2 and then you just get the square root of that : )
    distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

    // print output :0
    printf("Result: %.4lf",distance);
    
    return 0;
}