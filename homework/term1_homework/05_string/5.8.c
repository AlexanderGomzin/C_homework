#include <stdio.h>
#include <string.h>


void caeser_cipher_encrypt(char str, int x)
{
    char c;
    for(int i = 0; str[i] != '\0'; i++)
    {
        c = str[i];
        if(c >= 'A' && c <= 'Z') 
        {
            c = c + x;
      
            if(c > 'Z') 
            {
                c = c - 'Z' + 'A' - 1;
            }
            str[i] = c;
        }


        else if(c >= 'a' && c <= 'z') 
        {
            c = c + x;
            if(c > 'z') 
            {
                c = c - 'z' + 'a' - 1;
            }
         
            str[i] = c;
        }
    }    
}

int main() 
{
    char a[MAX];
    int x;
    scanf("%d",&x);
    scanf("%[^\n]", a);

    encrypt(a, x);
    printf("%s\n", a);
}