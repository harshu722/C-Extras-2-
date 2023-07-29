#include<iostream>
using namespace std;
int main()
{
	int arr[10], i, num, index;
	cout<<"Enter 10 numbers: ";
	for(i=0; i<10; i++)
	    cin>>arr[i];
	cout<<"\nEnter a Number to search: ";
	cin>>num; 
	for(i=0; i<10; i++)
	{
		if(arr[i] == num)
		{
			index = i;
			break;
		}
	}
	cout<<"\nFound at Index No."<<index;
	cout<<endl;
	return 0;
}
