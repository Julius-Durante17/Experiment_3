#include <iostream>
#include <conio.h>


using namespace std;

int main()
{
	char province[3][30]={"Province A","Province B", "Province C"};
	int temp[3][7];
	
	for(int n=0;n<3;n++)
	{
		cout<<"\nTemperature for "<<province[n]<<":\n ";
	
		
		for(int j=0;j<7;j++)
		{
			cout<<"\n"<<province[n]<<", Day "<<j+1<<": ";
			cin>>temp[n][j];
		}
	
		
	}
	for(int n=0;n<3;n++)
	{
		cout<<"\nThe temperature gathered in "<<province[n]<<":\n ";
	
		
		for(int j=0;j<7;j++)
		{
			cout<<"\n"<<province[n]<<", Day "<<j+1<<": "<<temp[n][j];
		}
	
		
	}
	
	cout<<endl;
	cout<<"\nThank you!"<<endl;
	
	
	getch();
	return 0;
}
