#include <iostream>
#include <iomanip>
#include <windows.h>
#include <stdlib.h>
#include <string>
#include <math.h>
#include <cmath>

using namespace std;

int menuChoice, menuS = 0, orderS = 0, orderChoice, orderAmount;
string itemName, menuI[5], orderName, orderI[5];
float itemPrice, menuP[5], orderItemTotal;

void menu();
void sleep();

void lineBIG(){
	
	cout << "---------------------------------------" << endl;
	
}

void lineSMALL(){
	
	cout << "-----------------" << endl;
	
}

void addItem (){
	cout << "Enter item name: ";
	cin.clear();
	cin >> itemName;
	menuI[menuS] = itemName;
	
	cout << "Enter item price: ";
	cin.clear();
	cin >> itemPrice;
	menuP[menuS] = itemPrice;
	
	cout << "You selected: " << menuI[menuS] << endl;
	system("pause");
	system("cls");
	sleep();
	system("cls");
	menuS++;
	return menu();
	
}

void orderItem(){
	
	if (menuS == 0){
		
		cout << "There are no items yet!" << endl;
		system("pause");
		system("cls");
		return menu();
		
	}else{
		
		for (int i = 0; i <= menuS - 1; i++)
		cout << setw(menuI[i].length()) << menuI[i] << "\t\t\t\t\t\t" << fixed << setprecision(2) << menuP[i] << endl;
		
		lineBIG();
		
		cout << "What is your order: ";
		cin >> orderChoice;
		orderI[orderS] = menuI[orderChoice];
		
		cout << "How many?: "
		cin >> orderAmount;
		
		orderItemTotal = menuI[menuP] * orderAmount;
		
		cout << orderItemTotal;
		
	}
	
}

void checkOut(){
	
	
	
}

void exit(){
	
	abort();
	
}

void sleep(){
	
	cout << "Loading";
    for (int i = 0; i <=4; i++){
    	Sleep(150);
    	cout << ".";
}
	
}

void menu(){
	
	lineBIG();
	
	cout << "Hell's Kitchen Self-Service Restaurant\n" << endl;
	
	cout << "1. Input an item" << endl;
	cout << "2. Order" << endl;
	cout << "3. Checkout" << endl;
	cout << "4. Exit" << endl;
	
	lineBIG();
	
	cout << "Enter your choice: ";
	cin >> menuChoice;
	
	switch (menuChoice){
		
		case 1:
			
			system("cls");
			sleep();
			system("cls");
			addItem();
			break;
		
		case 2:
			
			system("cls");
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
