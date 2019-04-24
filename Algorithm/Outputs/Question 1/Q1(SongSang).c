#include<stdio.h>

int main()
{
	int n;
	scanf_s("%d", &n);
	int arr[1000] = { 0 };
	int arr_i = 1;

	if (n == 1)
	{
		return 0;
	}

	arr[0] = n;

	while (n != 1)
	{
		if (n % 3 == 0)
		{
			n = n / 3;
			arr[arr_i] = n;
			arr_i++;
		}
		else if (n % 3 == 1)
		{
			n = 5 * n - 2;
			arr[arr_i] = n;
			arr_i++;
		}
		else if (n % 3 == 2)
		{
			n = 5 * n - 1;
			arr[arr_i] = n;
			arr_i++;
		}
	}

	int min = arr[0];
	int want;

	for (int i = 0; i < arr_i-1; i++)
	{
		if (arr[i] < min)
		{
			min = arr[i];
			want = i;
		}
		printf("%d: %d\n", i+1,arr[i]);
	}

	printf("\n%d", want+1);
}
