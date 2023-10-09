
#include <iostream>
using namespace std;

static void miniMaxSum(int arr[], int n)
{


	int minElement = 0, maxElement = 0, sum = 0;

	minElement = arr[0];
	maxElement = minElement;
	sum = minElement;

	for(int i = 1; i < n; i++)
	{

		sum += arr[i];

		if (arr[i] < minElement) 
		{
			minElement = arr[i];
		}

		if (arr[i] > maxElement) 
		{
			maxElement = arr[i];
		}
	}
	
	int avg=sum/n;

	cout<<"The max element is"<<maxElement<<"\n";
	cout<<"The min element is"<<minElement<<"\n";
	cout<<"The sum is "<<sum<<"\n";
	cout<<"The average is"<<avg<<"\n";
}

// Driver Code
int main()
{
	int num;
	cout<<"Enter the length of the array";
	cin>>num;
	int *arr= new int [num];
	for(int i=0;i<num;i++)
	{
		cout<<"Enter the "<<i<<"th element";
		cin>>arr[i];
	}
	miniMaxSum(arr,num);
}


