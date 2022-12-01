/*
* We give you a string. In string, every character have decimal value. 
* If the decimal value of character is even then make the character in uppercase. 
* Implement this by using function.
* Note - It is guaranteed that input string is always in lowercase.
*   Sample Input:                   Sample Output:
*   programming                     PRogRammiNg
*/

#include <stdio.h>

void makeEvenCharUppercase(char str[]);

int main()
{
    char str[100];
    int i;

    fgets(str, sizeof str, stdin);

    makeEvenCharUppercase(str);

    printf("%s",str);
    return 0;
}

void makeEvenCharUppercase(char str[])
{
    for(int i = 0; str[i] != '\0'; i++)
    {
        if(str[i] % 2 == 0)
        {
            str[i] = str[i] - 32;
        }
    }
}