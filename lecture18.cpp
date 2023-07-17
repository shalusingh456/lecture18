#include<iostream>
using namespace std;
int main()
{
	int i;
	//we have 10 elements which we have to sort:
	int a[10];
	cout<<"Enter the elements which you want to sort: ";
	for(i=0;i<10;i++)
	{
		cin>>a[i];
	}
	
	int j;
	for(j=0;j<9;i++)
	{
	
	int temp;
	for(i=0;i<10;i++)
	{
		if(a[i+1]<a[1])    //if the no. to the right is less than the no. to the left , we are
		{
			temp = a[i];
			a[i] = a[i+1];
			a[i+1]=temp;
		}
	}
}
       for(i=0;i<10;i++)
       {
       	cout<<a[i]<<" ";
	   }
}