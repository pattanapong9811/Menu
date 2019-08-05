#include <iostream>
#include <string>
using namespace std;

int main()
{
	char ch;
	string user , pass ,user1 ,pass2;
	do {
		cout << "//////////////////MENU/////////////////" << endl;
		cout << "1. Register" << endl;
		cout << "2. Login" << endl;
		cout << "Q. Exit Program" << endl;
		cout << endl;
		cout << "________________________________________" << endl;
		cout << endl;
		cout << "Enter Menu :";
		cin >> ch;

		if (ch == '1')
		{
			cout << "********Register********" << endl;
			cout << "input Username :";
			cin >> user;
			cout << "input Password :";
			cin >> pass;
		}
		else if (ch == '2')
		{

			cout << "input Username :";
			cin >> user1;
			cout << "input Password :";
			cin >> pass2;
			if (user == user1 && pass == pass2)
			{
				cout << "Username or password correct" << endl;

			}

			else
			{
				cout << "!!!!!Username or password incorrect Please try again!!!!!";

			}

		}
		}

		while (ch != 'Q' && ch != 'q');
		cout << "Exit Program" << endl;

		return(0);
}