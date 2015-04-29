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
	string name;
	cout << "...User Account Creator..." << endl << endl;
	string n;
	int eq;
	cout << "Enter your Name: ";
	getline (cin, name);
	cout << "Enter your Roll No...";
	cin >> eq;
	cout << endl << "Enter User ID: ";
	BUNNY: cin >> n;
	n = "FILES\\" + n;
	cout << endl;
	string pix = n;
	char p[n.length()+1];
	for (int i = 0; i<=n.length()-1; i++)
	p[i]=n.at(i);
	if (ifstream(p).good())
	{
		cout << "User ID Exists...Please Retry: ";
		goto BUNNY;
	}
	char x;
	string temp;
	PWT: cout << "Enter PIN (4-digit): ";
	n = "";
	int z = 0;
	while (z<=3)
	{
		PIN: x=_getch();
		if (x == 8 && n.length()>=1)
		{
			if (n.length()>=1)
			{
			n=n.substr(0,n.length()-1);
			cout << "\b \b" << (char)(7);
			}
			z--;
			goto PIN;
		}
		if (x<'0'|| x>'9')
		goto PIN;
		n+=x;
		cout << (char)254 << (char)7;
		z++;
	}	
	cout << endl;
	cout << "ReEnter PIN: ";
	temp = "";
	z = 0;
	while (z<=3)
	{
		PIN2: x=_getch();
		if (x==8 && temp.length()>=1)
		{
			if (temp.length()>=1)
			{
			temp=temp.substr(0,temp.length()-1);
			cout << "\b \b" << (char)7;
			}
			z--;
			goto PIN2;
		}
		if (x<'0'|| x>'9')
		goto PIN2;
		temp+=x;
		cout << (char)254 << (char)7;
		z++;
	}
	cout << endl;
	if (temp!=n)
	{
		cout << "Sorry. PINs don't match." << endl << endl;
		goto PWT;
	}
	ofstream fout (p);
	fout << name << endl;
	fout << eq << endl;
	fout << hex << hash (n,  n.length()-1);
	cout << endl << "Account Created!!!";
	getch();
	return 0; 
}
