#include <iostream>
#include <string>

using namespace std;

struct address {
	string street;
	string city;
	short zipCode;
};

struct customerProfile {
	int id;
	string name;
	string email;
	address customerAddress;
};

int main()
{
	customerProfile customer1;

	while (true) {
		cout << "Please enter your name : " << endl;
		getline(cin, customer1.name);
		if (customer1.name.empty()) {
			cout << "Invalid input. Can't be empty. Try again: " << endl;
		}
		else {
			break;
		}
	}

	while (true) {
		cout << "Please enter your id number: " << endl;
		cin >> customer1.id;
		if (cin.fail()) {
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			cout << "Invalid input. Please enter a valid id number." << endl;
		}
		else {
			break;
		}
	}
	cin.ignore(numeric_limits<streamsize>::max(), '\n');

	while (true) {
		cout << "Please enter your email: " << endl;
		getline(cin, customer1.email);
		if (customer1.email.empty()) {
			cout << "Invalid input. Can't be empty. Try again: " << endl;
		}
		else {
			break;
		}
	}
	
	while (true) {
		cout << "Please enter your street: " << endl;
		getline(cin, customer1.customerAddress.street);
		if (customer1.customerAddress.street.empty()) {
			cout << "Invalid input. Can't be empty. Try again: " << endl;
		}
		else {
			break;
		}
	}
	
	while (true) {
		cout << "Please enter your city: " << endl;
		getline(cin, customer1.customerAddress.city);
		if (customer1.customerAddress.city.empty()) {
			cout << "Invalid input. Can't be empty. Try again: " << endl;
		}
		else {
			break;
		}
	}
	
	while (true) {
		cout << "Please enter your ZIP code: " << endl;
		cin >> customer1.customerAddress.zipCode;
		if (cin.fail()) {
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			cout << "Invalid input. Please enter a ZIP code." << endl;
		}
		else {
			break;
		}
	}
	cin.ignore(numeric_limits<streamsize>::max(), '\n');


	cout << customer1.name << " - " << customer1.id << " - " << customer1.email << "."<< endl;
	cout <<customer1.customerAddress.street << " - " << customer1.customerAddress.city << " - " << customer1.customerAddress.zipCode << "." << endl;

	return 0;

}