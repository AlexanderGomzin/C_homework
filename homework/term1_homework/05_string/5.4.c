#include <stdio.h>
#include <string.h>

void alternate(char str1[], char str2[], int maxlen)
{
    int length1 = strlen(str1);
    int length2 = strlen(str2);

    for(int i = 0; i < maxlen; i++)
    {
        if(i < length1) 
        {
            printf("%c", str1[i]);
        }

        if(i < length2) 
        {
            printf("%c", str2[i]);
        }
    }
}

int main()
{
    char a[100];
    scanf("%s", a);
    int length1 = strlen(a);
    char b[100];
    scanf("%s", b);
    int length2 = strlen(a);
    int len = length1;
    if (len < length2)
    {
        len = length2;
    }
    alternate(a,b, len);
}