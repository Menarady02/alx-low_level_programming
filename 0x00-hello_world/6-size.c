#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: Using sizeof to print the size of various types.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
printf("char:%zu short:%zu int:%zu long:%zu long long:%zu ""float:%zu double:%zu long double:%zu\n",
sizeof(char), sizeof(short), sizeof(int), sizeof(long),
sizeof(long long), sizeof(float), sizeof(double),
sizeof(long double));
return (0);
}
