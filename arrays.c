#include<stdio.h>
int main() {
    int class_average;
    int students[10];  /* array initialization */
    students[0] = 10;
    students[1] = 20;
    students[2] = 20;
    students[3] = 30;
    students[4] = 40;
/* assessing array elements using array index */   
    class_average = (students[1] + students[2]+ students[3] + students[4] +students[0])/5;
    printf("the class average is %d \n",class_average);


}
