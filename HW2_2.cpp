/* Create a class called Invoice that a hardware store might use to represent an invoice for an item sold at the store.
An Invoice should include four data members — a part number (type string), a part description (type string),
a quantity of the item being purchased (type int) and a price per item (type int).
Your class should have a constructor that initializes the four data members.
Provide a set and a get function for each data member.
In addition, provide a member function named getInvoiceAmount that calculates the invoice
amount (i.e., multiplies the quantity by the price per item), then returns the amount as an int value.
If the quantity is not positive, it should be set to 0. If the price per item is not positive, it should be set to 0.
Write a test program that demonstrates class Invoice’s capabilities. */

#include <iostream>
#include <string>

using namespace std;

class Invoice {

//data members of the class Invoice
private:
	string partNr;
	string partDescr;
	int quantity;
	int price;

public:
	void setPartNr(string number) {
		partNr = number;
	}
	void setDescription(string description) {
		partDescr = description;
	}
	void setQty(int qty) {
		quantity = qty;
	}
	void setPrice(int p) {
		price = p;
	}

	string getPartNr() {
		return partNr;
	}
	string getDescription() {
		return partDescr;
	}
	int getQty() {
		return quantity;
	}
	int getPrice() {
		return price;
	}

	//Member function to calculate the amount of the invoice by multiplying quantity and price. Neither quantity nor price can be less than zero
	int getInvoiceAmount() {
		int qty = getQty();
		int p = getPrice();
		if (qty > 0) {
			qty = qty;
		}
		else {
			qty = 0; //set the price to zero if it is less than zero
			cout << "The quantity is invalid." << endl;
		}

		if (p > 0) {
			p = p;
		}
		else {
			p = 0; //set the price to zero if it is less than zero
			cout << "The price is invalid." << endl; 

		}
		int invoiceAmount = qty * p;
		return invoiceAmount;
	}

};

int main() {
	string number;
	string description;
	int qty;
	int p;

	Invoice MyFirst1;

	//user input for the variables and printing out the result and calculation
	cout << "Enter part number: " << endl; //can only be one string
	cin >> number;
	MyFirst1.setPartNr(number);

	cout << "Enter item description: " << endl; //can only be one string
	cin >> description;
	MyFirst1.setDescription(description);

	cout << "Enter quantity: " << endl;
	cin >> qty;
	MyFirst1.setQty(qty);

	cout << "Enter price: " << endl;
	cin >> p;
	MyFirst1.setPrice(p);

	cout << "My First Invoice: " << endl;
	cout << "___________________________________" << endl;
	cout << endl;
	cout << "Initial part number is: \n" << MyFirst1.getPartNr() << endl;
	cout << endl;
	cout << "Description: \n" << MyFirst1.getDescription() << endl;
	cout << endl;
	cout << "Quantity: \n" << MyFirst1.getQty() << endl;
	cout << endl;
	cout << "Price per item: \n" << "EUR " << MyFirst1.getPrice() << endl; //does not allow fractions
	cout << endl;
	cout << "Total Cost: \n" << "EUR " << MyFirst1.getInvoiceAmount() << endl;
}

