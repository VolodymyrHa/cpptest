#include "iostream"
#include "ctime"
using namespace std;

void main(){

	srand(time(NULL));
	const int size = 10;
	int arr[size];

	bool already;

	for (int i = 0; i < size;)
	{	
		already = false;
		int Nrand = rand() % 30;
	
		for (int j = 0; j <i; j++)
		{
		
			if (arr[j]==Nrand)
			{
				already = true;
				break;
			}
			
		}
		if (!already)
		{
			arr[i] = Nrand;
			i++;
		}

	}

	int check;
	check = arr[0];

	for (int i = 1; i < size; i++)
	{
		if (arr[i]>check)
		{
			check = arr[i];
		}
		
	}cout << check<<endl;
	
	/*for (int i = 0; i < size; i++)
	{
		cout << arr[i] << endl;
	}*/
}