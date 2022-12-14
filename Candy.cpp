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
	string _name;
	int _mass_in_grams;
	int _amount;
	double _price;
public:
	Candy() {}
	Candy(string name, int mass_in_grams, int amount, double price) {
		_name = name;
		_mass_in_grams = mass_in_grams;
		_amount = amount;
		_price = price;
	}

	CandyType Type = BAR;

	string GetName() {
		return _name;
	}

	int GetMass() {
		return _mass_in_grams;
	}

	int GetAmount() {
		return _amount;
	}

	double GetPrice() {
		return _price;
	}

	void SetPrice(double value) {
		_price = value;
	}

	void SetAmount(double value) {
		_amount = value;
	}

	void Ate() {
		if (_mass_in_grams * _amount > 2000) {
			cout << "You are on a diet!" << endl;
		}
		cout << "What a delicious candy!" << endl;
	}
};