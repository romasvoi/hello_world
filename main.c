#include <stdio.h>

int calculate(int first, int second);

int main()
{
	int result = calculate(10, 20);
	printf("Суммка чисел 10 + 20 = %d \n", result);    
	return 0;
}

int calculate(int first, int second)
{
	return first + second;
}