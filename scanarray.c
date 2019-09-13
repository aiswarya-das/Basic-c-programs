#include<stdio.h>
int main(){
    int i;
    int numbers[15];
    printf("Enter 10 numbers\n");
    /* using for conditional statement */
    for ( i = 0; i < 10; i++)
    {
        scanf("%d",&numbers[i]); /* using scanf to accept more than 1 input from user */
    }
    for (i = 0; i < 10; i++)
    {
        if (numbers[i] % 2 == 0)
        {
            printf("%d is even \n",numbers[i]);
        }
        else
        {
            printf("%d is odd \n",numbers[i]);
        }
        
        
    }
    
    
}