#include <iostream>
#include <iomanip>
#include <conio.h>

using namespace std;

int main()
{
	
	int values[10];
	double x;
	int n;
	int z=0;
	double smallest=0;
	int largest=0;
	
	
		
	for(int n=0;n<10;n++)
	{
		cout<< "Enter value number "<<n+1<<":"<<endl;
		cin>>values[n];
	}

	smallest=values[0];
	largest=values[0];
	
	for (int n=1;n<=10;n++)

	{
		z=values[n];
		
		if (z<smallest)
		
		smallest=z;		
		
	}
	
	cout<<"\nThe SMALLEST number is: "<<setw(3)<<smallest<<endl;
	
	for (int n=1;n<=10;n++)	
	{
		z=values[n];	
		if(z>largest)
		largest=z;
		
	}
	
	cout<<"\nThe LARGEST number is: "<<setw(3)<<largest<<endl;

	for(int n=0;n<=9;n++)
	{
		
		x+=values[n];
		
	}

	cout<<endl;
	cout<<"The Total of values is: "<<setw(3)<<x<<endl;
	
	cout<<fixed<<showpoint<<setprecision(2);
	cout<<"\nThe Average is: "<<setw(5)<<x/10<<endl;
	
	
	getch();
	return 0;
	
}
