#include<stdio.h>

int x, y, i, j, k, danger = 0, very_danger = 0;
int house[7][7] = { 0 };

int very_danger_check() {
	for (i = 0; i < 3; i++)
	{
		scanf_s("%d %d", &x, &y);	
		house[x-1][y-1] = 2;
		very_danger++;
	}
	return very_danger;
}

void danger_check() {
	for (i = 0; i < 7; i++)
	{
		for (j = 0; j < 7; j++)
		{
			if (house[i][j] == 2)
			{
				for (k = 0; k < 7; k++) {
					if (house[i][k] == 0)
						house[i][k] = 1;
					if (house[k][j] == 0)
						house[k][j] = 1;
				}
			}
		}
	}
}

int place_check() {
	for (i = 0; i < 7; i++) {
		for (j = 0; j < 7; j++) {
			if (house[i][j] == 1)
				danger++;
		}
	}
	return danger;
}
int main()
{
	very_danger = very_danger_check();
	danger_check();
	danger = place_check();
	printf("마을 예상 피해\n위험 : %d\n매우 위험 : %d\n", danger, very_danger);
	return 0;
}