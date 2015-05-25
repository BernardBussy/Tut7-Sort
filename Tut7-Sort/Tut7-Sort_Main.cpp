#include <iostream>
#include "sort.h"
#include "ComplexNumberTemplateClass.h"
using namespace std;

//Basic Bubble Sort Function Template
template <typename T>
void sort(T *array, int size)
{
	bool swap = true;
	T temp;
	while (swap)
	{
		swap = false;
		for (int i = 1; i < size; i++)
		{
			if (array[i - 1] > array[i])
			{
				temp = array[i];
				array[i] = array[i - 1];
				array[i - 1] = temp;
				swap = true;
			}
		}
	}
}

//Function Template for Displaying Generic Array
template <typename T>
void displayArray(T *array, int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << array[i] << " ";
	}
	cout << endl;
}

int main()
{
	//Demonstration with Double Array
	double  array[] = { 5.22, 3.56, 2.98, 1.21};
	sort<double>(array, 4);
	displayArray<double>(array, 4);

	//Demonstration with Integer Array
	int  intarray[] = { 5, 3, 2, 1 };
	sort<int>(intarray, 4);
	displayArray<int>(intarray, 4);

	//Demonstration with char Array
	char  chararray[] = { 'c','e','n','a'};
	sort<char>(chararray, 4);
	displayArray<char>(chararray, 4);

	ComplexNumberTemplateClass<float> complexValue1(1,1);
	ComplexNumberTemplateClass<float> complexValue2(2,2);
	ComplexNumberTemplateClass<float> complexValue3(3,3);
	ComplexNumberTemplateClass<float> complexValue4(2,-2);
	ComplexNumberTemplateClass<float> complexArray[] = { complexValue1, complexValue2, complexValue3, complexValue4 };
	
	displayArray <ComplexNumberTemplateClass<float>>(complexArray, 4);
	sort<ComplexNumberTemplateClass<float>>(complexArray, 4);
	displayArray <ComplexNumberTemplateClass<float>>(complexArray, 4);

}