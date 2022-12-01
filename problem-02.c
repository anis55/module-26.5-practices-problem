/*
* In Bubble sort we compares two adjacent elements and swaps them until they are in the intended order.
* You have given positive integer N, the size of an array as input. 
* Take an array of size N as input and sort this array by using Bubble sort. 
* You must make a function for swapping numbers by using pass by reference.
*	Sample Input: 					Sample Output:
*	5	 								2 3 4 6 8
*	4 3 8 2 6
*/
#include <stdio.h>

void swapValue(int* ptr_a, int* ptr_b);

int main()
{
	int n;
	scanf("%d", &n);
	int arr[n];
	
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if(arr[i] < arr[j])
			{
				swapValue(&arr[i], &arr[j]);
			}
		}
	}

	for (int i = 0; i < n; ++i)
	{
		printf("%d ", arr[i]);
	}
	
	return 0;
}


void swapValue(int* ptr_a, int* ptr_b)
{
	int temp;
	temp = *ptr_a;
	*ptr_a = *ptr_b;
	*ptr_b = temp;
}