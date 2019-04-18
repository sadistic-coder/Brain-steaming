#include <stdio.h>

#define NON_BLOCKED 1
#define BLOCKED 2
#define GOLD 3
#define MINER_PATH 4
#define MAX_SIZE 10

const int startAxis[2] = { 1, 0 };
int isVaildForMove(int(*map)[MAX_SIZE], int xAxis, int yAxis);
int addPathOfMiner(int(*map)[MAX_SIZE]);
void inputMapStatus(int(*inputMap)[MAX_SIZE]);
void printMapstatus(int(*inputMap)[MAX_SIZE]);

int main() {
	int map[MAX_SIZE][MAX_SIZE] = { 0 };

	inputMapStatus(map);
	addPathOfMiner(map);
	printMapstatus(map);

	return 0;
}
int isVaildForMove(int(*map)[MAX_SIZE], int xAxis, int yAxis)
{
	if (map[yAxis + 1][xAxis] == BLOCKED)
		return 0;

	if (map[yAxis][xAxis + 1] == GOLD)
		return 0;
	
	return 1;
}
int addPathOfMiner(int(*map)[MAX_SIZE])
{
	int minerAxis[2] = { startAxis[0], startAxis[1] };
	
	while (isVaildForMove(map, minerAxis[0], minerAxis[1]))
	{
		if (map[minerAxis[1]][minerAxis[0] + 1] == BLOCKED)
			minerAxis[1]++;
		else if (map[minerAxis[1]][minerAxis[0] + 1] == NON_BLOCKED)
			minerAxis[0]++;
		
		map[minerAxis[1]][minerAxis[0]] = MINER_PATH;
	}
}
void printMapstatus(int(*inputMap)[MAX_SIZE]) {
	for (int x = 0; x < MAX_SIZE; x++) {
		for (int y = 0; y < MAX_SIZE; y++) {
			printf("%d ", inputMap[x][y]);
		}
		printf("\n");
	}
}
void inputMapStatus(int(*inputMap)[MAX_SIZE]) {
	for (int x = 0; x < MAX_SIZE; x++) {
		for (int y = 0; y < MAX_SIZE; y++) {
			scanf("%d", &inputMap[x][y]);
		}
	}
}