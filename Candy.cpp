#include <iostream>

using namespace std;

enum CandyType
{
	BAR,
	BUTTON,
	POPCORN,
	GUM
};


class Candy
{
private:
	string name;
	int mass_in_grams;
	int amount;
	double price;
public:
	Candy() {}
	Candy(string name, int mass_in_grams, int amount, double price) {
		name = name;
		mass_in_grams = mass_in_grams;
		amount = amount;
		price = price;
	}

	CandyType Type = BAR;

	string GetName() {
		return name;
	}

	int GetMass() {
		return mass_in_grams;
	}

	int GetAmount() {
		return amount;
	}

	double GetPrice() {
		return price;
	}

	void SetPrice(double value) {
		price = value;
	}

	void SetAmount(double value) {
		amount = value;
	}

	void Ate() {
		if (mass_in_grams * amount > 2000) {
			cout << "You are on a diet!" << endl;
		}
		cout << "What a delicious candy!" << endl;
	}
};