#include <iostream>
#include <string>
#include <vector>


using namespace std;

class Product {
private:
	float price;
	int product_stock;

public:

};

class VendingMachine {
private:

	string name;
	int total_stock;
	float inserted_money;

	// tendria que haber un acceso a otra clase para productos

public:
	int removeStock() {
		if (total_stock > 0) {
			total_stock--;
		}

		return total_stock;
	}

};

//must create a functionable vending machine by tomorrow, using classes and github commands.