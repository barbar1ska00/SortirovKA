#include "optimized_bubble_sort.h"

template<typename T> void optimized_bubble_sort(T arr[], int n) {
	for (int i = 0; i < n - 1; i++)
	{
		bool swapped = false;
		for (int j = 0; j < n - i - 1; j++)
		{
			if (arr[j] > arr[j + 1]) {
				T tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
				swapped = true;
			}
		}
		if (!swapped)
			break;

	}
}

template void optimized_bubble_sort<int>(int[], int);
template void optimized_bubble_sort<double>(double[], int);