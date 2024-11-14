#include <iostream>
using namespace std;
int main()
{
	int n1=12;
	int n2=23;
	int n3=34;
	int findNum=0;
	cout<<"Enter the number: ";
	cin>>findNum;
	if(findNum == n1 || findNum == n2 || findNum == n3)
	{
		cout<<"This number is already present in the array";
	}
	else
	{
	cout<<"This number is not present in the array";
	}
}