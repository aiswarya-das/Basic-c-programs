#include<stdio.h>

int main() {
    int i , j;
    int array[3][4] = {{1,4,6,5},{2,3,5,6},{0,6,8,9}}; /* An array with 3 rows and 4 columns */
    /* output each array element's value */
    for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j < 4; j++)
        {
            printf("array[%d][%d]  = %d \n",i,j,array[i][j] );
        }
        
    }
    

    return 0;

}