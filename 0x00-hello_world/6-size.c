#include <stdio.h>

/**
* main - print the string in the put function
*
* Description: using the main functuon
* this program prints "Programming is like building a muitilingual puzzle
* Return: 0
*/
int main(void)
{
        char c;
        int i;
        long li;
        long long lli;
        float f;

        printf("size of a chart: %ld byte(s)\n", sizeof(c));
        printf("size of a int: %ld byte(s)\n", sizeof(i));
        printf("size of a long: %ld byte(s)\n", sizeof(li));
        printf("size of a long long: %ld byte(s)\n", sizeof(lli));
        printf("size of a float: %ld byte(s)\n", sizeof(f));
        return (0);
}
