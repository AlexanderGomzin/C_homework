#include <iostream>


class String
{
private:
	char* mpData;
	size_t mSize;
	size_t mCapacity;

public:

	char* data const (mpData;)

	String(const char* str)
	{
		cout << "Constructor" << str << endl;
		mSize = std::strlen(str);
		mCapacity = mSize + 1;

		mpData = (char*)std::malloc(mCapacity * sizeof(char));

		for (size_t i = 0; i < mSize + 1; ++i)
			mpData[i] = str[i];
	}


	~String()
	{
		cout << "Destructor" << mpData << endl;
		std::free(mpData);
	}

};

std::ostream

int main()
{
	String a = "Mouse";
	String b = "Elephant";

	b = a;

}

