#include <iostream>

using namespace std;

const int SIZE = 4;

bool isSorted(const int arr[], int size);
bool isNonDecreasing(const int arr[], int size);
bool isNonIncreasing(const int arr[], int size);
void printArr(const int arr[], int size);

int main()
{
	int test1[] = { 5, 3, 8, 2 };
	int test2[] = { 9, 3, 2, 0 };
	int test3[] = { 3, 5, 23, 43 };
	int test4[] = { 5, 5, 5, 5 };

	if (!isSorted(test1, SIZE))
		cout << "NOT ";
	cout << "SORTED" << endl;
	printArr(test1, SIZE);

	if (!isSorted(test2, SIZE))
		cout << "NOT ";
	cout << "SORTED" << endl;
	printArr(test2, SIZE);

	if (!isSorted(test3, SIZE))
		cout << "NOT ";
	cout << "SORTED" << endl;
	printArr(test3, SIZE);

	if (!isSorted(test4, SIZE))
		cout << "NOT ";
	cout << "SORTED" << endl;
	printArr(test4, SIZE);

	return 0;
}

bool isSorted(const int arr[], int size)
{
	// TODO: This function returns true if the array is sorted.  It could be
	// sorted in either non-increasing (descending) or non-decreasing (ascending)
	// order.  If the array is not sorted, this function returns false.

	// HINT:  Notice that the functions isNonDecreasing and isNonIncreasing are not
	// called from main.  Call the isNonDecreasing and isNonIncreasing functions here.
}

bool isNonDecreasing(const int arr[], int size)
{
	// TODO:  Loop through the array to check whether it is sorted in
	// non-decreasing (in other words, ascending) order.  If the array
	// is non-decreasing, return true.  Otherwise, return false.
}

bool isNonIncreasing(const int arr[], int size)
{
	// TODO:  Loop through the array to check whether it is sorted in
	// non-increasing (in other words, descending) order.  If the array
	// is non-increasing, return true.  Otherwise, return false.
}

void printArr(const int arr[], int size)
{
	for (int i = 0; i < size; i++)
		cout << arr[i] << " ";

	cout << endl << endl;
}
