/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

//Question 2
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

    char ch;
    
    char s[50],sen[100];
    scanf("%c", &ch);
    scanf("%s\n", &s);
    scanf("%[^\n]s", &sen);
    printf("%c \n",ch);
    printf("%s \n",s);
    printf("%s",sen);
        
    return 0;
}