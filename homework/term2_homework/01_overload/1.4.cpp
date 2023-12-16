#include <iostream>
using std::cout, std::endl;

void countLetters(const char* str,  int& numLetters, int& numDigits, int& numOther)
{
	numLetters = 0;
	numDigits = 0;
	numOther = 0;

	for (int i = 0; str[i]; ++i)
	{
		char s = str[i];
		if ((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z'))
		{
			numLetters += 1;
		}
		else if (str[i] >= '0' && str[i] <= '9')
		{
			numDigits += 1;
		}
		else
		{
			numOther += 1;
		}
	}

}

int main() 
{
    char str[20];

    for (int j = 0; 1; ++j) 
    {
        char x;
        scanf("%c", &x);

        if (isspace(x)) 
        {
            str[j] = '\0';
            break;
        }
        
        str[j] = x;
    }


    printf("%s\n", str);

    int numLetters, numDigits, numOther;
	countLetters(str, numLetters, numDigits, numOther);
	cout << "Number of letters = " << numLetters << endl;
	cout << "Number of digits = " << numDigits << endl;
	cout << "Number of other symbols = " << numOther << endl;
}