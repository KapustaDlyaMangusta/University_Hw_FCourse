#include <iostream>
#include "Dinner.cpp"
#include "Candy.h"

using namespace std;

int main()
{
    Candy a = Candy("Zoryane Syauvo", 250, 5, 17.5);
    Candy b = Candy("Bdzhilka", 300, 4, 21.3);
    Candy c = Candy("Dushes", 300, 12, 8.5);
    Candy d = Candy("Barbarus", 120, 14, 6.0);
    Candy e = Candy("Sharm", 120, 8, 24.8);

    Candy arr[] = { a,b,c,d,e };

    Dinner f = Dinner("Saturday", "17:30");
    f.SetCandies(arr);
    f.FindTheMostExpensiveCandies();
    cout << endl;
    f.SortCandyAmountByAscending();
    cout << endl;
    f.Eat();
}
