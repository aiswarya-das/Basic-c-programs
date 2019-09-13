#include<stdio.h>
int main() {
    int i;
    int a[20] = {10,2,3,1,15,5}; /* To print the number of elements greater than 5 in the array */
    for(i=0;i<6;i++){
        if(a[i]>5){
            printf("%d\n",a[i]);
        }

    }
    

}