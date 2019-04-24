#include <stdio.h>

#define SAFE 0
#define DANGEROUS 1
#define TOO_DANGEROUS 2

#define AMOUNT_OF_AXIS 3
#define MAX_SIZE 7

void printStatus(int(*houseStatus)[MAX_SIZE]);
void changeStatus(int (*bombAxis)[2], int(*houseStatus)[MAX_SIZE]);
void changeStatusByOneAxis(int xAxis, int yAxis, int(* houseStatus)[MAX_SIZE]);
int isVaildForChanging(int compared);
int countOneStatus(int status, int(*houseStatus)[MAX_SIZE]);
void printAnnoucement(int(*houseStatus)[MAX_SIZE]);
 
int main()
{
	int houseStatus[MAX_SIZE][MAX_SIZE] = { 0 };
	int bombAxis[AMOUNT_OF_AXIS][2] = { 	{ 4, 4 },
				{ 5, 5 },
				{ 6, 6 } };

	changeStatus(bombAxis, houseStatus);
	printStatus(houseStatus);
	printAnnoucement(houseStatus);

	return 0;
}

void printStatus(int(*houseStatus)[MAX_SIZE])
{
	for (int xIndex = 0; xIndex < MAX_SIZE; xIndex++)
	{
		for (int yIndex = 0; yIndex < MAX_SIZE; yIndex++)
			printf("%d ", houseStatus[xIndex][yIndex]);
		
		printf("\n");
	}
}
void changeStatus(int (*bombAxis)[2], int(*houseStatus)[MAX_SIZE])
{	
	for (int index = 0; index < AMOUNT_OF_AXIS; index++)
	{
		changeStatusByOneAxis(bombAxis[index][0], bombAxis[index][1], houseStatus);
	}
}
void changeStatusByOneAxis(int xAxis, int yAxis, int(*houseStatus)[MAX_SIZE])
{
	for (int index = 0; index < MAX_SIZE; index++)
	{
		if (isVaildForChanging(houseStatus[index][yAxis - 1]))
			houseStatus[index][yAxis - 1] = DANGEROUS;

		if (isVaildForChanging(houseStatus[xAxis - 1][index]))
			houseStatus[xAxis - 1][index] = DANGEROUS;
	}
	houseStatus[xAxis - 1][yAxis - 1] = TOO_DANGEROUS;
}
int isVaildForChanging(int compared)
{
	return compared == SAFE;
}
int countOneStatus(int status, int(*houseStatus)[MAX_SIZE])
{
	int sumOfStatus = 0;

	for (int xIndex = 0; xIndex < MAX_SIZE; xIndex++)
	{
		for (int yIndex = 0; yIndex < MAX_SIZE; yIndex++)
		{
			if (houseStatus[xIndex][yIndex] == status)
				sumOfStatus++;
		}
	}

	return sumOfStatus;
}
void printAnnoucement(int(*houseStatus)[MAX_SIZE])
{
	printf("마을 예상 피해\n");
	printf("위험 : %d채\n", countOneStatus(DANGEROUS, houseStatus));
	printf("매우 위험 : %d채\n", countOneStatus(TOO_DANGEROUS, houseStatus));
}