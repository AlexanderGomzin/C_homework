#include <stdio.h>
#include <string.h>
#define MAX 1000

int longest_word(const char str[], char rabbit[]) 
{
    int longest = 0;
    int len = 0;
    int word_start = -1;


    for (int i = 0; str[i] != '\0'; i++) 
    {

        if (str[i] != ' ' && str[i] != '\t' && str[i] != '\n') 
        {

            if (word_start == -1) 
            {
                word_start = i;
            }

            len++;
        } 
        else 
        {

            if (len > longest) 
            {
                longest = len;
                strncpy(rabbit, &str[word_start], longest);
                rabbit[longest] = '\0';
            }

            len = 0;
            word_start = -1;
        }
    }


    if (len > longest) {
        longest = len;
        strncpy(rabbit, &str[word_start], longest);
        rabbit[longest] = '\0';
    }

    return longest;
}

int main() 
{
    char a[MAX];
    scanf("%[^\n]", a);
    char rabbit[MAX];
    
    int word_length = longest_word(a, rabbit);
    printf("%i\n", word_length);
}