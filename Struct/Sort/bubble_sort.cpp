#include "bubble_sort.h"

template<typename T>
void bubble_sort(T arr[], int n) {
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = 0; j < n - i - 1; j++)
		{
			if (arr[j] > arr[j + 1]) {
				T tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
		}
	}
}

template void bubble_sort<int>(int[], int);
template void bubble_sort<double>(double[], int);

