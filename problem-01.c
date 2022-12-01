/*
* You are given two integer x and y. Now you have to find the average of this two integer. 
* Implement this by using pointers.
* Sample Input: 				Sample Output:
*	13 2 							7.500
*/
#include <stdio.h>

int main()
{
	int x, y;
	int* ptr_x = &x;
	int* ptr_y = &y;

	scanf("%d %d", ptr_x, ptr_y);

    double sum = (*ptr_x + *ptr_y);
	double avg =  sum / 2;

	printf("%.3lf", avg);


	return 0;
}