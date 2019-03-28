#include <iostream>

using namespace std;

void printInventory(int index, string inventory[])
{
	for(int i = 0; i < index; i++)
	{
		cout << "(" << i+1 << ")" << inventory[i] << endl;
	}
	cout << endl;
}

void path4(string inventory[])
{
	cout << "test";
}

void path3(string inventory[])
{
	int choice;
	cout << "You Have Chosen to Continue, You May Regret That..." << endl;
	cout << "You approach a wild worm, what do you want to do?" << endl;
	cout << "Ignore it, it is puny and weak(1)\nAttack it, it deserves to die(2)\nKill Yourself(3): ";
	cin >> choice;
	while (choice< 1 || choice > 3)
	{
		cout << "\nthat is not a valid option, please try again...";
	}
	if (choice == 3)
	{
		cout << "\nYou use the " << inventory[0] << "to end your miserable life" << endl;
	}
	if (choice == 2)
	{
		cout << "\nYou pick up the worm and snap his puny neck" << endl;
		path4(inventory);
	}
	if (choice == 1)
	{
		cout << "\nYou walk past the worm, but it suddenly grows to be 7000ft in length, which he uses to strangle you to death";
	}
}

void path2(string inventory[])
{
	char choice;
	int choice2;
	cout << "Do You Want to Take The Chocolate Bar? (y/n): ";
	cin >> choice;
	while (!(choice == 'y' || choice == 'Y' || choice == 'n' || choice == 'N'))
	{
		cout << "not a valid choice, please reenter: ";
		cin >> choice;
		cout << endl;
	}
	if (choice == 'y' || choice == 'Y')
	{
		cout << "You pick up the chocolate bar" << endl;
		inventory[1] = "chocolate bar";
		cout << "Your inventory currently contains:\n";
		printInventory(2, inventory);
	}
	cout << "What would you like to do next?: \n(1) Kill Yourself\n(2) Continue: ";
	cin >> choice2;
	if (choice2 == 1)
	{
		cout << "You point the gun at yourself and end your life quickly" << endl;
	}
	
	if (choice2 == 2)
	{
		path3(inventory);
	}
	
}

void path(string inventory[])
{
	int choice;
	cout << "You have chosen to continue... you may regret that \n";
	cout << "You find yourself in front of a gruesome monster, but there is also a chocolate bar next to him \n";
	cout << "What do you want to do?: \nAttack monster(1)\ntake chocolate bar(2) \n";
	cin >> choice;
	while (choice > 2 || choice < 1)
	{
		cout << "not a valid choice, please reenter: ";
		cin >> choice;
	}
	if (choice == 1 && inventory[0] == "gun")
	{
		cout << "You shoot at the monster, and he dies a slow painful death, and you enjoy it." << endl;
		path2(inventory);
	}
	
	if (choice == 1 && inventory[0] == "knife")
	{
		cout << "You attempt to stab the monster but he guts you before you are able to kill him" << endl;
		cout << "You slowly bleed out and scream for a total of 69 hours before finally dying" << endl;
	}
	
	if (choice == 2)
	{
		cout << "You reach for the chocolate bar, but the monster gets to you first...\nHe eats you for dinner, and has the chocolate as dessert!\n";
	}
}

int main()
{
	string gun = "gun";
	string knife = "knife";
	int choice;
	int choice2;
	string inventory[50];
	cout << "Welcome to The Best Adventure Ever!" << endl;
	cout << "You Find Yourself in a room, there is a gun and a knife, which one do you want?" << endl;
	cout << "Knife (1) \n" << "Gun (2): ";
	cin >> choice;
	cout << endl;
	while (choice > 2 || choice < 1)
	{
		cout << "not a valid choice, please reenter: ";
		cin >> choice;
	}
	if (choice == 2) 
	{
		cout << "You Pick Up The Gun!" << endl;
		inventory[0] = gun;
	}
	if (choice == 1) 
	{
		cout << "You Pick Up The Knife!" << endl;
		inventory[0] = knife;
	}
	
	cout << "What would you like to do next?\nKill Yourself (1)\nContinue (2):";
	cin >> choice;
	
	if (choice == 1 && inventory[0] == gun)
	{
		cout << "You point the gun at yourself and end your life quickly" << endl;
		return 0;
	}
	
	if (choice == 1 && inventory[0] == knife)
	{
		cout << "You slowly mutilate yourself before ending your sorry, miserable life." << endl;
		return 0;
	}
	
	if (choice == 2)
	{
		path(inventory);
		//cout << "You walk off a cliff and fall to your death..." << endl;
		//cout << "What would";
		return 0;
	}
	
	
	
}