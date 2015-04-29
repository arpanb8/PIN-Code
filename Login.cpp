#include "iostream"
#include "conio.h"
#include "string"
#include "fstream"

using namespace std;

long long int hash (string x, int p)
{
	if (p==0)
	return 1212*(x.at(0)>>3);
	else
	return 3211*(x.at(p)^15232242%(x.at(p)*x.at(x.length()-1)/2))*hash(x, p-1);
}

int main()
{
	cout << "PLEASE LOGIN..." << endl << endl;
	cout << "Enter User ID: ";
	char t20[123];
	while (true)
	{
		string ID;
		cin >> ID;
		ID = "FILES\\"+ID;
		char w[ID.length()];
		for (int i = 0; i<=ID.length()-1; i++)
		{
		w[i]=ID.at(i);
		t20[i]=ID.at(i);
		}
		if (ifstream(w).good())
		break;
		else
		{
			cout << endl << "User ID not found..." << endl;
			cout << "1. ReEnter User ID";
			cout << endl << "2. Exit";
			cout << endl;
			char t;
			cout << "Your Choice...";
		    XC: t = _getch();
			if (t!='1' && t!='2')
			{
			goto XC;
			}
			else if (t=='1')
			{
						cout << 1 << (char)7 <<  endl;
				cout << endl << "Enter your User ID...";
				continue;
			}
			else
			{
				cout << "2";
				cout << (char)7 << endl << endl << "BYE";
				getch();
				return 0;
			}			
		}
	}
	cout << endl;
	char x;		//Reading the Pin...
	PWT: cout << "Enter PIN (4-digit): ";
	string n = "";
	int z = 0;
	while (z<=3)
	{
		PIN: x=_getch();
		if (x==8 && n.length()>=1)
		{
			if (n.length()>=1)
			{
			n=n.substr(0,n.length()-1);
			cout << "\b \b" << (char)7;
			}
			z--;
			goto PIN;
		}
		if (x<'0'|| x>'9')
		goto PIN;
		n+=x;
		cout << (char)254 << (char)7;
		z++;
	}		//Reading the Pin...
	string name;
	ifstream fin (t20);
	getline (fin, name);
	int roll;
	fin >> roll;
	long long int pin;
	fin >> hex >> pin;
	if (pin==hash (n, 3))
	cout << endl << endl << "LOGIN Successful!!!";
	else
	{
	cout << endl << endl << "Incorrect PIN..." << endl;
	cout << "1. ReEnter PIN";
			cout << endl << "2. Exit";
			cout << endl;
			char t;
			cout << "Your Choice...";
		    XC2: t = _getch();
			if (t!='1' && t!='2')
			{
			goto XC2;
			}
			else if (t=='1')
			{
						cout << 1 << (char)7 << endl << endl;
						goto PWT;
			}
			else
			{
				cout << "2";
				cout << (char)7 << endl << endl << "BYE";
				getch();
				return 0;
			}		
	}
	cout << endl << "Press any key to continue..." << endl;
	getch();
	system ("cls");
	cout << "Welcome " << name << "!!!" << endl;
	cout << "Roll No. " << roll;
	getch();
	return 0;	
}
