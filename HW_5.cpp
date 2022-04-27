#include "Header.h"
int main()
{
	const int size = 12;
	int arr[size] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12 };
	int* p = arr;
	print(p, size);
	swap(p, size);
	print(p, size);
}