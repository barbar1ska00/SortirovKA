#include "selection_sort.h"

template<typename T>
void selection_sort(T arr[], int n) {
	for (int i = 0; i < n; i++)
	{

		int min_poz = i;
		for (int j = i; j < n; j++)
		{
			if (arr[j] < arr[min_poz]) {
				min_poz = j;

			}
		}
		if (arr[i] != arr[min_poz]) {
			T tmp = arr[i];
			arr[i] = arr[min_poz];
			arr[min_poz] = tmp;

		}

	}
}

template void selection_sort<int>(int[], int);
template void selection_sort<double>(double[], int);