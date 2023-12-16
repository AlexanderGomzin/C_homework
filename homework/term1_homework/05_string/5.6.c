#include <stdio.h>
#include <string.h>

char right_seq(char str[], int len)
{
    int k = 0;

    for(int i = 0; i < len; i++)
    {
        if (str[i] == '(') 
        {
            k++;
        }
        else if (str[i] == ')') 
        {
            k--;
        }

        if (k < 0) return "No";
    }

    if (k != 0) return "No";

    return "Yes";
}


int main() {
    char a[MAX];
    scanf("%[^\n]", a);
    
    int len = strlen(a);

    printf("%s\n", right_seq(a, len));
}