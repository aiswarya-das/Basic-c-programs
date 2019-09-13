#include<stdio.h>

// variable declaration :

extern int ammu;
extern char full_name[50];

//function declaration:

int main() {

/*variable definition*/
   int ammu;
    char full_name[50];

/*actual initialization*/

    ammu = 18; 

    printf("Hello world \n");  /* \n - New line character */

/* %d - take the  next argument and print it as an integer */

    printf("my age is %d \n", ammu);  /* % - Placeholder */  

    printf("enter your full name \n");

/* %s - take the  next argument and print it as string */

    scanf("%s",full_name); /*  The scanf function allows you to accept input from stdin */
    printf("full name is %s \n",full_name);
    return 0;

}