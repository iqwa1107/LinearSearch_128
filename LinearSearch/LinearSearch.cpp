#include <iostream>
using namespace std;

int arr[20];
int n;
int i;

void input()
{
	while (true)
	{
		cout << " Enter The Number of element in The arry: ";
		cin >> n;
		if ((n > 0) && (n <= 20))
			break;
		else

			cout << "\nArray should have minimum 1 and maximum 20 elemnts. \n\n";
		
	}
}