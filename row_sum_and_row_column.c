#include<stdio.h>
int main(){
    int arr[5][5] = {{1,5,6,3,7,},
                    {8,9,2,7,6},
                    {8,6,2,4,3},
                    {84,6,3,7,8},
                    {38,6,21,7,0}};
int sum = 0;
printf("Row Sum: \n");
for (int i=0;i<5;i++){
    for (int j=0;j<5;j++){
        sum += arr[i][j];
            }
            printf("%d ",sum);
            sum = 0;
}
printf("\n");
printf("Column Sum: \n");
for (int j=0;j<5;j++){
    for (int i=0;i<5;i++){
        sum += arr[i][j];
            }
            printf("%d ",sum);
            sum = 0;
}
return 0;
}