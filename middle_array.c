#include<stdio.h>
int main() {
    int i;
    /* initializing array with strings */
    char array[4][20] = {"Apple","Orange","banana","grapes"}; /* [4] = no. of elements,[20]= array element size */
   for(i = 1;i<=2;i++){
       printf("%s\n",array[i]);
   }

}