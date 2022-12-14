#include <iostream>
#include "Dinner.h"
#include "Candy.cpp"

using namespace std;

class Dinner
{
private:
	string _day;
	string _time;
public:
	Dinner() {};

	Dinner(string day, string time) {
		_day = day;
		_time = time;
	}
	Candy Candies[5];

	void SetCandies(Candy arr[]) {
		for (int i = 0; i < 5; i++) {
			Candies[i] = arr[i];
		}
	}

	void FindTheMostExpensiveCandies() {
		double temp;
		for (int i = 0; i < 5; i++) {
			for (int j = i + 1; j < 5; j++)
			{
				if (Candies[j].GetPrice() < Candies[i].GetPrice()) {
					temp = Candies[i].GetPrice();
					Candies[i].SetPrice(Candies[j].GetPrice());
					Candies[j].SetPrice(temp);
				}
			}
		}

		for (int i = 4; i > 1; i--) {
			int  number = 1;
			cout << "On the " << number << " place: " << Candies[i].GetName() << " - " << Candies[i].GetPrice() << endl;
			number++;
		}
	}

	void SortCandyAmountByAscending() {
		double temp;
		for (int i = 0; i < 5; i++) {
			for (int j = i + 1; j < 5; j++)
			{
				if (Candies[j].GetAmount() < Candies[i].GetAmount()) {
					temp = Candies[i].GetAmount();
					Candies[i].SetAmount(Candies[j].GetAmount());
					Candies[j].SetAmount(temp);
				}
			}
		}

		cout << "Candies:\n" << endl;

		for (int i = 0; i < 5; i++) {
			cout << Candies[i].GetName() << " - " << Candies[i].GetAmount() << endl;
		}
	}

	void Eat() {
		for (int i = 0; i < 5; i++) {
			cout << Candies[i].GetName() << " Eat: \n" << endl;
			Candies[i].Ate();
		}
	}
};