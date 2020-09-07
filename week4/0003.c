#include <stdio.h>

    int main() {
        int m,n;
        scanf("%d ", &m); //input of dimension of matrix
        scanf("%d", &n);
        int matrix1[m][n];
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                scanf("%d", &matrix1[i][j]);
            }
        }
        int matrix2[m][n];
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                scanf("%d", &matrix2[i][j]);
            }
        }
        int matrix3[m][n];                         //answer matrix
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                matrix3[i][j] = matrix1[i][j] + matrix2[i][j];
            }
        }
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                printf("%d ",matrix3[i][j]);
            }
            printf("\n");
        }
        return 0;
    }