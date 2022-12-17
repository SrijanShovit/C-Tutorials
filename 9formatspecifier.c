//Format specifier is a way to tell compiler which data type is going to be used in i/o

#include<stdio.h>

int main(){
    int a  = 8;
    float b = 2.333;
    char ch = 'd';
    printf("Hello world\n");
    printf("a = %d and b=%f\n",a,b); //a = 8 and b=2.333000

    //in %x.yf gives value upto accuracy of .y digits and total charcters used is x digits
    printf("Value of b is %3.7f\n",b); //Value of b is 2.3329999

    printf("Value of b is %12.6f\n",b); //Value of b is      2.333000

    //if -ve offset then space after printing
    printf("a = %-16.7dthis\n",a); //a = 0000008         this   

    printf("%c\n",ch);     //d 
    
} 

/*
l --> long
lf --> double
Lf --> long double
*/