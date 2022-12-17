//A sequence of characters which doesn't represnt itslef rather denote something else when used inside string literal or character

#include<stdio.h>
int main(){
    printf("apun \bka raaj hai\n");   //apunka raaj hai
    printf("apun\tka raaj hai\n");   //apun    ka raaj hai
    printf("\'apun\' ka raaj hai\n");   //'apun' ka raaj hai
}