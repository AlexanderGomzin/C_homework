#include <stdio.h>
#include <string.h>

void ladder(char str[], int len)
{

    for(int i = 0; i < len; i++)
     {
        for(int j = 0; j <= i; j++)
        {
            printf("%c", str[j]);
        }
        printf("\n");
    }
}

int main()
{
    char a[100];
    scanf("%s", a);
    int length = strlen(a);
    ladder(a, length);
    

    return 0;
}