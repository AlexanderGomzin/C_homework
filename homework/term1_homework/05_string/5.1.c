#include <stdio.h>

int main()
{
    char a;
    scanf("%c", &a);

    if (a >= 'A' && a <= 'Z') 
    {
        printf("%s\n", "Uppercase Letter"); 
    }
    else if( a >= 'a' && a <= 'z') 
    {
        printf("%s\n", "Lowercase Letter"); 
    }
    else if( a >= '0' && a <= '9') 
    {
        printf("%s\n", "Digit"); 
    }
    else
    {
        printf("%s\n", "Other");  
    }

    return 0;
}