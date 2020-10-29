#include "PhoneBook.h"
#include "Record.h"

#include<iostream>
#include<fstream>
#include<string>
#include<sstream>
using namespace std;

int PhoneBook::findName(string s) {
	int nameLength;
	for (nameLength = 0; nameLength < MAXSIZE; nameLength++) {
		if (list[nameLength].getName() == s) {
			return nameLength;
		}
	}
}

PhoneBook::PhoneBook() {

}

PhoneBook::PhoneBook(string s) {
	bookName = s;
}

string PhoneBook::getPhoneBookName() {
	return bookName;
}

int PhoneBook::getNumberofRecords() {
	return num_records;
}

void PhoneBook::insert(string name, int number) {
	Record temp(name, number);
	list[num_records] = temp;
	num_records = num_records + 1;
}

void PhoneBook::displayPhoneBook() {
	for (int i = 0; i < num_records; i++) {
		cout << list[i].getName() << "	" << list[i].getNumber() << endl;
	}
}

void PhoneBook::removeName(string s) {
	int i = findName(s);
	if (i != 99) {
		for (int n = i; n < num_records; n++) {
			list[n] = list[n + 1];
		}
		num_records--;
	}

}

int PhoneBook::getPhoneNumber(string s) {
	int i = findName(s);
	return list[i].getNumber();
}

//PhoneBook::~PhoneBook() {

//}
