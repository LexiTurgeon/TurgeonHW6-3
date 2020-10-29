#include<iostream>
#include<fstream>
#include<string>
#include<sstream>
using namespace std;
#include "PhoneBook.h"
#include "Record.h"
#include "Record.cpp"

int main() {
	string cmd;
	PhoneBook functionFinder("functionFinder");
	while (1) {

		cout << "Enter (1) to Insert a Name and Number. " << endl;
		cout << "Enter (2) to Get a Number for a Person. " << endl;
		cout << "Enter (3) to Display the Phone Book. " << endl;
		cout << "Enter (4) to Remove a Person from the Phone Book. " << endl;
		cout << "Enter (5) to Quit. " << endl;
		cin >> cmd;

		if (cmd == "1") {
			cout << "Enter Contact Name: " << endl;
			string name;
			cin >> name;

			cout << "Enter Contact Phone Number: " << endl;
			int number;
			cin >> number;

			functionFinder.insert(name, number);
			cout << "Name inserted into Phone Book. " << endl;
		}
		else if (cmd == "2") {
			string name;
			cout << "Enter Name of Contact you wish to find: " << endl;
			cin >> name;
			cout << "Phone Number is: " << functionFinder.getPhoneNumber(name) << endl;
		}
		else if (cmd == "3") {
			cout << "Contacts in Phone Book: " << endl;
			functionFinder.displayPhoneBook();
		}
		else if (cmd == "4") {
			string name;
			cout << "Enter Name of Contact to Remove: " << endl;
			cin >> name;
			functionFinder.removeName(name);
		}
		else if (cmd == "5") {
			break;
		}
	}
}
