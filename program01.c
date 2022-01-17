/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>

int main () {
    int A, B, X;
    int W, Y;
    int D,number,count,Z,i;
  
    A=593;
    B=298;
    D=1;
    Z=2;
    
    

    X = A-B;
    printf("\n%d", X);
    
    X = A*B;
    printf("\n%d", X);
    
    X =  A/B;  
    printf("\n%d", X);

    printf("\nDigite O valor W : ");
    scanf("%d", &W);

    printf("\nDigite O valor Y : ");
    scanf("%d", &Y);

    X = Y*W;
    printf("\nW vezes Y = %d",X);

    if (W > Y) {
        printf("\nW e maior"); 
    } else {
        if (Y > W) {
            printf("\nY e maior");
        } else {
            printf("\nW IGUAL a Y");
        }
    }

    printf("\nHow many numbers do you want print? : ");
    scanf("%d", &number);
    
    for(count = 1; count <= number; count++)
    {
       printf("%d ", count);
    }

    printf("\nDescending\n");
    for(count = number; count >= 1; count--)
    {
        printf("%d ",count);
    }

    printf("\nEven\n");
    for(count = 1; count <= number; count++)
    {
        if (count % 2 == 0){
            printf("%d ",count);
        }
    }

    printf("\nOdd\n");
    for(count = 1; count <= number; count++)
    {
        if (count % 2 == 1){
            printf("%d ",count);
        }

    

/*************************************************************
    printf("\n 1 2 3 4 5 6 7 8 9 10 ");

    printf("\n 15,14,13,12,11,10,9,8,7,6,5,4,3,2,1,0");

    printf("\n 0 2 4 6 8 10 12 14 16 18 20 22 24 ");
**************************************************************/

    for(D=1;D<=10;D++){

        printf("\ndavid e godtoso de mais");
    }

    return 0;
}  
