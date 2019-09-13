#include<stdio.h>

#include<string.h>
/* void is used since no integer is being returned */
void main() {  
    char str1[100];
  
    printf("enter your password\n");
    scanf("%s",str1);
    
    if (strcmp(str1,"ammu")==0)  /* strcmp used to compare two strings */
    {
        printf("the password is correct\n");
    }
    else
    {
       printf("the password is incorrect\n");
    }
    
    
  

}