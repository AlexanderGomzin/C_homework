#include <iostream>
using std::cout, std::endl;

struct Book
{
	char title[100];
	int pages;
	float price;
};

void addPrice(Book& b, float x)
{
	b.price += x;
}

bool isExpensive(const Book& b)
{
	if (b.price > 1000)
	{
		return true;
	}
	return false;
}

void printBook(Book& b)
{
	cout << b.title << ": pages - " << b.pages << ", price - " << b.price << endl;
}

int main()
{
	Book b = {"General Physics: ELectricity and Magnetism", 650, 900};
	printBook(b);
	cout << isExpensive(b) << endl;
	addPrice(b, 200);
	printBook(b);
	cout << isExpensive(b) << endl;
}