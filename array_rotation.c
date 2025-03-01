#include <stdio.h>

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    int positions = 2;
    
    printf("Original array: ");
    printArray(arr, size);
    
    rotateLeft(arr, size, positions);
    
    printf("Array after rotation: ");
    printArray(arr, size);
    
    return 0;
}

void printArray(int arr[], int size) {          // print og array
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}


void rotateLeft(int arr[], int size, int positions) {
    int temp[size];                      //temp array

    for (int i = 0; i < size; i++) {    // rotate array
        temp[i] = arr[(i + positions) % size];
    }
    
    for (int i = 0; i < size; i++) {      // og array
        arr[i] = temp[i];
    }
}
