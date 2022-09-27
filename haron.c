#include <stdio.h>
#include <math.h>


int main () {

   float side1;
   float side2;
   float side3;


   // Get the sides
   printf("Side 1: ");
   scanf("%f", &side1);
   printf("Side 2: ");
   scanf("%f", &side2);
   printf("Side 3: ");
   scanf("%f", &side3);

   // Do fricking math
   float s = 0.5 * (side1 + side2 + side3);
   float result = sqrt(s*(s-side1)*(s-side2)*(s-side3));
   

    
   // Final Result Print
   printf("%.1f\n", result);
   return 0;
}
