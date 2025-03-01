/*Grade Checker: Given score a between 0 and 100,
 assign grades based on the score using the ternary operator:

"A" for 90 and above
"B" for 80-89
"C" for 70-79
"D" for 60-69
"F" for below 60
*/

#include <stdio.h>

char grade_checker(int a) {
    return (a >= 90 ) ? 'A': (a >= 80 ) ? 'B': (a >= 70 ) ? 'C': (a >= 60 ) ? 'D': 'F';

}

int main() {

    int score;
    char result;

    printf("Enter your mark:");
    scanf("%d",&score);

    result = grade_checker(score);
    printf("Your Grade is: %c \n",result);
    return 0;
}

