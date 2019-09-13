#include<stdio.h>
int main() {
    int i;
    int numbers[20] = {1,2,3,4,5,6,7,8,9,10}; /* printing even numbers from an array */
    for  (i = 0; i < 10; i++)
    {
        if (numbers[i]%2 ==0)
        {
            printf("%d\n",numbers[i]);
        }
        
    }
    

}