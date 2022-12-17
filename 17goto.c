//goto statement is preferref only to break multiple loops

#include<stdio.h>

// int main(){
//     label:
//         printf("We are inside label");
//         goto end;
//     int a = 5;
//     printf("%d\n",a);   //couldn't be used so confusing
//     goto label;
//     end: 
//         printf("We are at end\n");
// }

//OP : We are inside labelWe are at end

//Use of goto

int main(){
    int num,i;
    for (i = 0; i < 8; i++)
    {
        for (int j = 0; j < i; j++)
        {
            printf("Enter a no; 0 to exit");
            scanf("%d",&num);
            if (num == 0) goto end;
        }
        
    }
    end:

}
/*
Enter a no; 0 to exit3
Enter a no; 0 to exit6
Enter a no; 0 to exit78
Enter a no; 0 to exit456
Enter a no; 0 to exit0
*/