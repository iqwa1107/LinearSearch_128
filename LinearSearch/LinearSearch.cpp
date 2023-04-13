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
	int ctr; // Number OF Comparisons
	do
	{
		// accpt the number to be searched
		cout << "\nEnter the elemnt you wnt to search: "; //Langkah no 1 algoritma
		int item;
		cin >> item;

		ctr = 0;
		for ( i = 0; i < n; i++)            // langkah no 2 & 3 & 4
		{
			ctr++; 
			if (arr[i] == item)            // Langkah No 5 Algoritma
			{ 
				cout << "\n" << item << " found at position " << (i + i) << endl;
				break;
			}
		}
		if (i == n)                   // Langkah no 5 Algoritma
			cout << "\n" << item << " not found in teh arry\n";
		cout << "\nNumber of comparisons: " << ctr << endl;

		cout << "\nContinue search (y/n): ";
		cin >> ch;

	} while ((ch == 'y') || (ch == 'y'));
}

int main()
{
	input();
	LinearSearch();
}

