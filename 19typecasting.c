/*
Type Casting Syntax:
(type) value
*/

#include<stdio.h>

int main(){
    int a = 3;
    float b = 6.6;
    float c = 10/6;
    printf("GIF of b = %d\n",(int)b);   //GIF of b = 6

    //int to int arithmetic is int
    printf("value of c = %f\n",c);   //value of c = 1.000000

    c = (float)10/6;
    printf("value of c = %f\n",c);   //value of c = 1.666667


}