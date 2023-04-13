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
	// Accept array element 
	cout << "\n------------------\n";
	cout << " Enter aray Elmenet \n";
	cout << "---------------------\n";
	for ( i = 0; i < n; i++)
	{
		cout << "<" << (i + i) << "> ";
		cin >> arr[i];
	}
}



void LinearSearch()
{
	char ch;
	int cth; // Number OF Comparisons
}