#include <iostream>
#include <conio.h>
#include <string>
using namespace std;

int main ()
{
	int countletter;
	int b[100];
	int countnumber;
	int n;
	int j;
	int empty;
	int l;
	int x;
	char str[100];
	char word;
	
	cout << "How many LETTERS would you like to input? ";
	cin >> countletter;
	
	cout << "\nHow many NUMBERS would you like to input?  ";
	cin >> countnumber;
	
	cout << "\nPlease enter the numbers: (note: Please press enter for the next number input)" << endl;
	cout <<"\n ANY NUMBERS!\n"<<endl;
	for (n = 0; n< countnumber; n++)
	{
		cin >> b[n];
	}
	cout << "\nPlease enter the letters: (note: Please press enter for the next letter input) " << endl;
	cout <<"\n LETTERS ONLY!\n"<<endl;
	for  (l = 0; l < countletter ; l++)
	{
		cin >> str[l];
	}
	
	cout << "\nSorting...\n";

	
	for (n = 0; n < countnumber; n++)
	{
		for (j = n + 1; j < countnumber; j++)
		{
			if (b[n] > b[j])
			{
				empty = b[n];
				b[n] = b[j];
				b[j] = empty;
			}
		}
	}
	
	

	
	{
	for (l = 0; l < str[l]; l++)
	{
		for (x = l +1; l < str [x]; x++)
		{
			if  (str[x] < str [l])
			{
				word = str[x];
				str [x] = str [l];
				str [l] = word;
			}
		}
	}
	}
	
	cout << "\nFinal Output: ";
	for (n = 0; n < countnumber; n++)
	{
		cout << b[n]; 
			
	}
	for (l = 0; l < countletter; l++)
		{
			cout << str[l];
		}
	
	cout<<endl;
	cout<<"\nThank You!"<<endl;
	
	getch ();
	return 0;
}
