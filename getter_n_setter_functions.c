#include <stdio.h>
#include <string.h>
struct Student {
    int roll_number;
    char name[50];
    float score;
};
float getscore(struct Student *s) 
{
    return s->score;  
}
void setscore(struct Student *s, float score) 
{
    if (score >= 0 && score <= 100) {  
        s->score = score;
    } else {
        printf("Invalid score value.\n");
    }
}
int main() {
    struct Student student1;
    student1.roll_number = 999;
    strcpy(student1.name, "Juice WRLD");
    setscore(&student1, 99.99);
    printf("score of %s: %.2f\n", student1.name, getscore(&student1));
    return 0;
}
