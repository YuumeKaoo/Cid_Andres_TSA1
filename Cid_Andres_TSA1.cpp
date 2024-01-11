#include <iostream>
#include <windows.h>
#include <stdlib.h>
#include <string>

using namespace std;

int menuChoice;
string itemName;
float itemPrice;


void lineBIG(){
	
	cout << "---------------------------------" << endl;
	
}

void lineSMALL(){
	
	cout << "-----------------" << endl;
	
}

void addItem (){
	cout << "Enter item name: ";
	cin >> itemName;
	cout << "Enter item price: ";
	cin >> itemPrice;
	system("pause");
	system("cls");
	return menu();
	
}

void orderItem(){
	
	
	
}

void checkOut(){
	
	
	
}

void exit(){
	
	abort();
	
}

void menu(){
	
	cout << "Hell's Kitchen Self-Service Restaurant\n" << endl;
	
	cout << "1. Input an item" << endl;
	cout << "2. Order" << endl;
	cout << "3. Checkout" << endl;
	cout << "4. Exit" << endl;
	
	lineSMALL();
	
	cout << "Enter your choice: ";
	cin >> menuChoice;
	
	switch (menuChoice){
		
		case 1:
			
			system("cls");
			addItem();
			break;
		
		case 2:
			
			orderItem();
			break;
		
		case 3:
			
			checkOut();
			break;
			
		case 4:
			
			exit();
			break;
			
		default:
			
			cout << "Invalid choice. Please enter a valid option.\n";
			system("pause");
			system("cls");
			menu();
		
	}
	
}

int main(){
	
	menu();
	
	return 0;
}
