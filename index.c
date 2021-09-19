/******************************************************************************

In this example, the user is asked to enter two integers. Then, 
the sum of these two integers is calculated and displayed on the screen.


*******************************************************************************/

#include <stdio.h>
int main() {    

    int number1, number2, sum;
    
    printf("Enter two integers: ");
    scanf("%d %d", &number1, &number2);

    // calculating sum
    sum = number1 + number2;      
    
    printf("%d + %d = %d", number1, number2, sum);
    return 0;
}
