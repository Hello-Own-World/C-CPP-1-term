#include <stdio.h>


int change_col_to_row(arr){


    return 0;
}









int main() {

    int a, b;
    printf("Enter length of 2D array.\n Enter value for x:");
    scanf("%d", &a);
    printf("Enter value for y:");
    scanf("%d", &b);

    int matrix[a][b];

    for (int i = 0; i<a; i++){
       for (int y = 0; y<b; y++){
           printf("Enter value for x = %d y = %d:\n", i, y);
           double x;
           scanf("%lf", &x);
           matrix[i][y] = x;
       }
     }

     for (int i = 0; i<a; i++) {
         printf("\n");
        for (int y = 0; y < b; y++) {
            printf("%d ", matrix[i][y]);
        }
    }


    return 0;
}
