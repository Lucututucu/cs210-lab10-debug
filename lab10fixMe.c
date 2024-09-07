/** lab10fixMe.c
* ===========================================================
* Name: Name, Date
* Section:
* Project: Lab 10
* Purpose: Debugging
* ===========================================================
* Instructions:
 * Complete the tasks outlined in the lab writeup.
*/

// Remember includes and defines
#include <stdio.h>
#include "lab10_functs.h"
//#include "lab10_functs.c"
 

int main() { 
    // findLargest()
    int n1, n2, n3;

    printf("Enter three integer numbers: ");
    scanf("%d %d %d", &n1, &n2, &n3);            
    int largest = findLargest(n1,n2,n3);
    printf("%d\n", largest);

    // convertTemperature()
    double fahrenheit;
    printf("Please enter a temperature in fahrenheit: ");
    scanf("%lf", &fahrenheit);
    double celsius = convertTemperature(fahrenheit);
    printf("%lf\n", celsius);

}