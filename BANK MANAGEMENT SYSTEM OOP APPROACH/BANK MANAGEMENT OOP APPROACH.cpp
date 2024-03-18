#include<iostream>
#include<string>
#include<conio.h>
#include<windows.h>
using namespace std;
class bank {
protected:
	int cust;
	string id;
public:
	bank() {
		cust = 0;
		id = "";
	}
};




class customer :public bank {
public:
	string name, accnoID, address;
	int contact, cash;
public:
	customer() {
		name = "";
		accnoID = "";
		address = "";
		contact = 0;
		cash = 0;
	}
};

class acc : public customer {
protected:
	customer temp[100];
public:
	void choice();

	void perData();

	void show();

	void update();

	void search();

	void transaction();

	void del();
	acc() {}
};
void acc::choice() {
	char ch;

	while (1) {

		cout << "\n\nPRESS..!!" << endl;

		cout << "1. Create new account" << endl;

		cout << "2. View customers list" << endl;

		cout << "3. Update information of existing account" << endl;

		cout << "4. Check the details of an existing account" << endl;

		cout << "5. For transactions" << endl;

		cout << "6. Remove existing account" << endl;

		cout << "7. Exit" << endl;

		cin >> ch;

		system("CLS");

		switch (ch) {

		case '1':

			acc::perData();

			break;

		case '2':

			if (cust == 0) {

				cout << "No data is entered" << endl;

			}
			else {

				acc::show();

			}

			break;

		case '3':

			if (cust == 0)

				cout << "No data is entered" << endl;

			else

				acc::update();

			break;

		case '4':

			if (cust == 0)

				cout << "No data is entered" << endl;

			else

				acc::search();

			break;

		case '5':

			if (cust == 0)

				cout << "No data is entered" << endl;

			else

				acc::transaction();

			break;

		case '6':

			if (cust == 0)

				cout << "No data is entered" << endl;

			else

				acc::del();

			break;

		case '7':

			exit(0);

			break;

		default:

			cout << "Invalid input" << endl;

			break;
		}

	}
}
void acc::perData() {

	cout << "Enter data of person " << cust + 1 << endl;

	cout << "Enter name: ";

	cin >> temp[cust].name;

	cout << "ID: ";

	cin >> temp[cust].accnoID;

	cout << "Address: ";

	cin >> temp[cust].address;

	cout << "Contact: ";

	cin >> temp[cust].contact;

	cout << "Total Cash: ";

	cin >> temp[cust].cash;

	cust++;

}
void acc::show() {

	for (int i = 0; i < cust; i++) {

		cout << "Data of person " << i + 1 << endl;

		cout << "Name: " << temp[i].name << endl;

		cout << "ID: " << temp[i].accnoID << endl;

		cout << "Address: " << temp[i].address << endl;

		cout << "Contact: " << temp[i].contact << endl;

		cout << "Cash: " << temp[i].cash << endl;

	}

}
void acc::update() {
	cout << "Enter id of student those data you want to update" << endl;

	cin >> id;

	for (int i = 0; i < cust; i++) {

		if (id == temp[i].accnoID) {

			cout << "Previous data" << endl;

			cout << "Data of person " << i + 1 << endl;

			cout << "Name: " << temp[i].name << endl;

			cout << "ID: " << temp[i].accnoID << endl;

			cout << "Address: " << temp[i].address << endl;

			cout << "Contact: " << temp[i].contact << endl;

			cout << "Cash: " << temp[i].cash << endl;

			cout << "\nEnter new data" << endl;

			cout << "Enter name: ";

			cin >> temp[i].name;

			cout << "ID: ";

			cin >> temp[i].accnoID;

			cout << "Address: ";

			cin >> temp[i].address;

			cout << "Contact: ";

			cin >> temp[i].contact;

			cout << "Total Cash: ";

			cin >> temp[i].cash;

			break;

		}

		if (i == cust - 1) {

			cout << "No such record found" << endl;

		}

	}

}
void acc::search() {

	cout << "Enter id of coustomer those data you want to search" << endl;

	cin >> id;

	for (int i = 0; i < cust; i++) {

		if (id == temp[i].accnoID) {

			cout << "Name: " << temp[i].name << endl;

			cout << "ID: " << temp[i].accnoID << endl;

			cout << "Address: " << temp[i].address << endl;

			cout << "Contact: " << temp[i].contact << endl;

			cout << "Cash: " << temp[i].cash << endl;

			break;

		}

		if (id != accnoID) {

			cout << "No such record found" << endl;

		}

	}

}
void acc:: transaction() { //override
	int cash;

	char ch;

	cout << "Enter id of coustomer those data you want to transaction" << endl;

	cin >> id;

	for (int i = 0; i < cust; i++) {

		if (id == temp[i].accnoID) {

			cout << "Name: " << temp[i].name << endl;

			cout << "Address: " << temp[i].address << endl;

			cout << "Contact: " << temp[i].contact << endl;

			cout << "\nExisting Cash " << temp[i].cash << endl;

			cout << "Press 1 to deposit" << endl;

			cout << "Press 2 to withdraw" << endl;

			cin >> ch;

			switch (ch) {

			case '1':

				cout << "How much cash you want to deposit??" << endl;

				cin >> cash;

				temp[i].cash += cash;

				cout << "Your new cash is " << temp[i].cash << endl;

				break;

			case '2':

			back:

				cout << "How much cash you want to withdraw??" << endl;

				cin >> cash;

				if (cash > temp[i].cash) {

					cout << "Your existing cash is just " << temp[i].cash << endl;

					Sleep(3000);

					goto back;

				}

				temp[i].cash -= cash;

				cout << "Your new cash is " << temp[i].cash << endl;

				break;

			default:

				cout << "Invalid input" << endl;

				break;

			}

			break;

		}

		if (i == cust - 1) {

			cout << "No such record found" << endl;

		}

	}

}
void acc::del() {
	char ch;

	cout << "Press 1 to remove specific record" << endl;

	cout << "Press 2 to remove full record" << endl;

	cin >> ch;

	switch (ch) {

	case '1':

		cout << "Enter id of student those data you want to remove" << endl;

		cin >> id;

		for (int i = 0; i < cust; i++) {

			if (id == temp[i].accnoID) {

				for (int j = i; j < cust; j++) {

					temp[j].name = temp[j + 1].name;

					temp[j].accnoID = temp[j + 1].accnoID;

					temp[j].address = temp[j + 1].address;

					temp[j].contact = temp[j + 1].contact;

					temp[j].cash = temp[j + 1].cash;

					cust--;

					cout << "Your required data is deleted" << endl;

					break;

				}

			}

			if (i = cust = -1) {

				cout << "No such record found" << endl;

			}

		}

		break;

	case '2':

		cust = 0;

		cout << "All record is deleted" << endl;

		break;

	default:

		cout << "Invalid Input" << endl;

		break;

	}

}
//class saving : public acc
//{
//protected:
//	int amount;
//	int choice;
//	//void withdraw();
//public:
//	void deposit();
//	void transaction();
//	void withdraw()
//	{
//		cout << "Enter ammount to withdraw" << endl;
//		cin >> amount;
//		if (amount > 30000)
//			cout << "Invalid ammount" << endl;
//
//		else
//			cash = cash - amount;
//	}
//};
//
//void saving::transaction() {
//	cout << "Enter '1' to withdraw cash and '2' to deposit" << endl;
//	cin >> choice;
//	switch (choice) {
//	case 1:
//		saving::withdraw();
//	case 2:
//		saving::deposit();
//	default:
//		cout << "invalid choice" << endl;
//
//	}
//}
///*
//void saving::withdraw(){
//	cout << "Enter ammount to withdraw" << endl;
//	cin >> amount;
//	if (amount > 30000)
//		cout << "Invalid ammount" << endl;
//
//	else
//		cash = cash - amount;
//}
//*/
//class current : public acc
//{
//protected:
//	int amount;
//	int choice;
//	//void withdraw();
//public:
//	void deposit();
//	void transaction();
//	void withdraw()
//	{
//		cout << "Enter ammount to withdraw" << endl;
//		cin >> amount;
//		if (amount > 25000)
//			cout << "Invalid ammount" << endl;
//
//		else
//			cash = cash - amount;
//	}
//};
//
//void saving::transaction() {
//	cout << "Enter '1' to withdraw cash and '2' to deposit" << endl;
//	cin >> choice;
//	switch (choice) {
//	case 1:
//		saving::withdraw();
//	case 2:
//		saving::deposit();
//	default:
//		cout << "invalid choice" << endl;
//
//	}
//}


int main() {
	bank obj;
	customer obj1;
	acc obj2;
	obj2.choice();
	return 0;
}