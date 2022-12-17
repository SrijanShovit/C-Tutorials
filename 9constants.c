//any value or variable that cannot be changed

/*
Two ways in C:
1. #define
2. const
*/

#include<stdio.h>
#define PI 3.14

int main(){
    int a = 5;
    const float b = 7.7;
    // b = 6; //error
    printf("%f\n",PI);          //3.140000 ; it just replaced PI with its value before compilation 

    // PI = 0.707; //error because 3.14 = 0.707 makes no sense
    PI == 0.707;    //no problem
    // 2 == 8;

    printf("%d\n",PI == 3.14); //1


}

//No format specifier for bool so int is used beacuse it is next highest data type