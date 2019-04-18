#include <stdio.h>

#define SAFE 0
#define DANGER 1
#define VERYDANGER 2

int main()
{
    int minePosition[2][3], danger=0, veryDanger=0, house[7][7] = { SAFE };
    for (int i = 0; i < 3; i++) {
        scanf_s("%d %d", &minePosition[0][i], &minePosition[1][i]);
    }
    for (int i = 0; i < 3; i++) {
        house[minePosition[1][i]][minePosition[0][i]] = VERYDANGER;
    }
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 7; j++) {
            if (house[minePosition[0][i]][j] != VERYDANGER) {
                house[minePosition[0][i]][j] = DANGER;
            }
        }
        for (int j = 0; j < 7; j++) {
            if (house[j][minePosition[1][i]] != VERYDANGER) {
                house[j][minePosition[1][i]] = DANGER;
            }
        }
    }
    for (int i = 0; i < 7; i++) {
        for (int j = 0; j < 7; j++) {
            if (house[j][i] == VERYDANGER) {
                veryDanger++;
            }
            else if (house[j][i] == DANGER) {
                danger++;
            }
        }
    }

    printf("마을 예상 피해\n위험: %d\n매우 위험: %d", danger, veryDanger);
}