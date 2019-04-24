#include<stdio.h>
void number_check(int n);

int main() {
	int n;
	scanf_s("%d", &n);
	number_check(n);
}

void number_check(int n) {
	int cnt = -2;
	while (1) {
		if (n == 1)
			break;
		if (n % 3 == 0)
			n = n / 3;
		else if (n % 3 == 1)
			n = 5 * n - 2;
		else
			n = 5 * n - 1;
		cnt++;
	}
	printf("%d\n", cnt);
}