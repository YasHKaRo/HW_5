#include "Header.h"

void print(int* p, int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << p[i] << "\t";
	}
	cout << endl;
}

void swap(int* p, int size)
{
	int buff = 0;
	for (int i = 0; i < size; i += 2)
	{
		buff = p[i];
		p[i] = p[i + 1];
		p[i + 1] = buff;
	}
}