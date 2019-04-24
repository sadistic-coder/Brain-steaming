#include <stdio.h>

int main() {
	int i, start, end, result;
	char operate[100];
	scanf_s("%s", operate);
	for (i = 0; i < len(operate); i++) {
		if (operate[i] = '(')
			start = i;
		if (operate[i] = ')')
			end = i;
		if (operate[i] = '+')
			result += int(operate[i - 1]) + int(operate[i + 1]);

	}
}