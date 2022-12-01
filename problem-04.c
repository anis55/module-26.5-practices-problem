/*
* You are given an R, the radius of a circle. 
* Now your task to find the area of that circles. 
* Implement this by using function.
* Sample Input        Sample Output
*     5                  78.540001
*/
#include <stdio.h>

float area(int R);

int main() {
    
   int R;
   scanf("%d", &R);
   
   printf("%f", area(R));

    return 0;
}

float area(int R)
{
    return 3.1416 * R * R;
}