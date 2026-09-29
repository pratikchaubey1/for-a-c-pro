// write a program  to imolemenet multiplication and transpore of 2D matrix

#include<stdio.h>

int main(){

    int rows, cols;

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    printf("Enter number of columns: ");
    scanf("%d", &cols);

    int arr[rows][cols];

    
    printf("Enter matrix elements:\n");

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    
    printf("Your Matrix is:\n");

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    
    printf("Transpose of the Matrix is:\n");

    for (int i = 0; i < cols; i++) {
        for (int j = 0; j < rows; j++) {
            printf("%d ", arr[j][i]);
        }
        printf("\n");
    }
  return 0;
}