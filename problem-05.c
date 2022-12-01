/*
* You have given positive integer N, the size of an array as input. Take an array of size N as input. 
* You have to find the sum of those element in array which last digit is zero. 
* Implement this by using function.
* Note - It is guaranteed that each element of an array is at least 2 digit number.
* Sample Input: 			Sample Output:
*	5 							200
*	110 24 50 35 40
*/

#include <stdio.h>


int sum_of_numbers_if_last_digit_zero(int arr[], int size);

int main() {
    
    int n;
    scanf("%d", &n);
    
    int arr[n];
    
    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
   
    
    printf("%d", sum_of_numbers_if_last_digit_zero(arr, n));

    return 0;
}

int sum_of_numbers_if_last_digit_zero(int arr[], int size)
{
    int sum = 0;
    
    for(int i = 0; i < size; i++)
    {
        if(arr[i] % 10 == 0)
        {
          sum += arr[i];
        }
    }
    
    return sum;
}