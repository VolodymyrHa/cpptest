#include "iostream"
using namespace std;

void main(){

	const int sum = 5;

	int arr[sum];

	for (int i = 0; i < sum; i++)
	{
		
		arr[i] = rand()%10;

		cout << "Hello World";
		cout << "Hello World";
		cout << "Hello Git";

	}

	for (int i = 0; i < sum; i++)
	{
		cout << arr[i]<<endl;
	}

}