#include <stdio.h>

int main() {
    int num = 5;      
    int pos = 1;      
    int val = 0;      
    num = (num & ~(1 << pos)) | (val << pos);
    printf("Updated num: %d\n", num);
    return 0;
}
