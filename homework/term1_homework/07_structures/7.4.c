#include <stdio.h>

struct date
{
    int day, month, year;
};

typedef struct date Date;

struct movie
{
    char title[50];
    
    float rating;
    
    Date release_date;
};

typedef struct movie Movie;

int main()
{
    Date a = {15, 5, 1970};
    
    Date* p = &a;
    
    (*p).year++;
    
    printf("%d %d %d\n", a.day, a.month, a.year);

    Movie m = {"Inception", 8.661, {8, 6, 2010}};
    
    Movie* pm = &m;
    
    (*pm).rating += 1;
    
    (pm->release_date.month) += 1;
}