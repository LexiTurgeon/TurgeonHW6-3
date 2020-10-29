#ifndef PHONEBOOK_H
#define PHONEBOOK_H

#include<iostream>
#include<fstream>
#include<string>
#include<sstream>
using namespace std;
#include "Record.h"

const int MAXSIZE = 10;
class PhoneBook
{
private:
	Record list[MAXSIZE];
	string bookName;
	int num_records;
	int findName(string s);
public:
	PhoneBook();
	PhoneBook(string s);
	string getPhoneBookName();
	int getNumberofRecords();
	void insert(string name, int number);
	void displayPhoneBook();
	void removeName(string s);
	int getPhoneNumber(string s);
	~PhoneBook();
	PhoneBook* m_PhoneBook = nullptr;
};

#endif
