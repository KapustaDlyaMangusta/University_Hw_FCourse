#include <iostream>
#include "Candy.cpp"

using namespace std;

class Dinner
{
private:
	string day;
	string time;
public:
	Dinner() {};

	Dinner(string day, string time) {
		day = day;
		time = time;
	}
	Candy candies[5];

	void SetCandies(Candy arr[]) {
		for (int i = 0; i < 5; i++) {
			candies[i] = arr[i];
		}
	}

	void FindTheMostExpensiveCandies() {
		double temp;
		for (int i = 0; i < 5; i++) {
			for (int j = i + 1; j < 5; j++)
			{
				if (candies[j].GetPrice() < candies[i].GetPrice()) {
					temp = candies[i].GetPrice();
					candies[i].SetPrice(candies[j].GetPrice());
					candies[j].SetPrice(temp);
				}
			}
		}

		for (int i = 4; i > 1; i--) {
			int  number = 1;
			cout << "On the " << number << " place: " << candies[i].GetName() << " - " << candies[i].GetPrice() << endl;
			number++;
		}
	}

	void SortCandyAmountByAscending() {
		double temp;
		for (int i = 0; i < 5; i++) {
			for (int j = i + 1; j < 5; j++)
			{
				if (candies[j].GetAmount() < candies[i].GetAmount()) {
					temp = candies[i].GetAmount();
					candies[i].SetAmount(candies[j].GetAmount());
					candies[j].SetAmount(temp);
				}
			}
		}

		cout << "candies:\n" << endl;

		for (int i = 0; i < 5; i++) {
			cout << candies[i].GetName() << " - " << candies[i].GetAmount() << endl;
		}
	}

	void Eat() {
		for (int i = 0; i < 5; i++) {
			cout << candies[i].GetName() << " Eat: \n" << endl;
			candies[i].Ate();
		}
	}
};