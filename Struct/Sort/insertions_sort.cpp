#include "insertions_sort.h"

template <typename T>
void insertions_sort(T arr[], int n) {

	for (int i = 1; i < n; i++)
	{
		for (int j = i; j > 0; j--)
		{
			if (arr[j] < arr[j - 1]) {
				T tmp = arr[j];
				arr[j] = arr[j - 1];
				arr[j - 1] = tmp;
			}
			else {
				break;
			}
		}
	}
}

template void insertions_sort<int>(int[], int);
template void insertions_sort<double>(double[], int);