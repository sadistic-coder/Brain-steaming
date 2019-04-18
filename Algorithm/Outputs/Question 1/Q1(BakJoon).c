#include <stdio.h>

int isMinimumNumber(int currentMinimum, int compared);

int main()
{
	int n = 124;
	int count = 1;
	int minimum = n;
	int retCount;

	while (n != 1)
	{
		count++;

		if (n % 3 == 0)
			n = n / 3;
		else if (n % 3 == 1)
			n = 5 * n - 2;
		else if (n % 3 == 2)
			n = 5 * n - 1;

		if (isMinimumNumber(minimum, n))
		{
			minimum = n;
			retCount = count;
		}
	}

	printf("%d", retCount);
	
	return 0;
}

int isMinimumNumber(int currentMinimum, int compared)
{
	if (currentMinimum > compared && compared != 1)
		return 1;
	
	return 0;
}