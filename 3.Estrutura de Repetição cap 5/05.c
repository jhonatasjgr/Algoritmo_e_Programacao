/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    for(int i=1;i<=10;i++){
        for(int j=0;j<=10;j++){
            printf("%d x %d = %d\n",i,j,(i*j));
        }
        printf("\n");
    }

    return 0;
}
