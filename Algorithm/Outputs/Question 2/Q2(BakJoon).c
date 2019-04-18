#include <stdio.h>

#define DANGEROUS 1
#define TOO_DANGEROUS 2

#define AMOUNT_OF_AXIS 3
#define MAX_SIZE 7

void printStatus(int(*houseStatus)[7]);
void changeStatus(int (*bombAxis)[2], int(*houseStatus)[7]);
void changeStatusToDangerous(int xAxis, int yAxis, int(* houseStatus)[7]);
void changeStatusToTooDangerous(int xAxis, int yAxis, int(*houseStatus)[7]);
int countOneStatus(int status, int(*houseStatus)[7]);
void printAnnoucement(int(*houseStatus)[7]);
 
int main()
{
	int houseStatus[7][7] = { 0 };
	int bombAxis[3][2] = { { 1, 1 },
						   { 3, 7 },
						   { 5, 6 } };

	changeStatus(bombAxis, houseStatus);
	printAnnoucement(houseStatus);

	return 0;
}

void printStatus(int(*houseStatus)[7])
{
	for (int xIndex = 0; xIndex < MAX_SIZE; xIndex++)
	{
		for (int yIndex = 0; yIndex < MAX_SIZE; yIndex++)
		{
			printf("%d ", houseStatus[xIndex][yIndex]);
		}
		printf("\n");
	}
}
void changeStatus(int (*bombAxis)[2], int(*houseStatus)[7])
{	
	for (int index = 0; index < AMOUNT_OF_AXIS; index++)
	{
		changeStatusToDangerous(bombAxis[index][0], bombAxis[index][1], houseStatus);
	}
	for (int index = 0; index < AMOUNT_OF_AXIS; index++)
	{
		changeStatusToTooDangerous(bombAxis[index][0], bombAxis[index][1], houseStatus);
	}
}
void changeStatusToDangerous(int xAxis, int yAxis, int(*houseStatus)[7])
{
	for (int index = 0; index < MAX_SIZE; index++)
	{
		houseStatus[index][yAxis - 1] = DANGEROUS;
		houseStatus[xAxis - 1][index] = DANGEROUS;
	}
}
void changeStatusToTooDangerous(int xAxis, int yAxis, int(*houseStatus)[7])
{
	houseStatus[xAxis - 1][yAxis - 1] = TOO_DANGEROUS;
}
int countOneStatus(int status, int(*houseStatus)[7])
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
void printAnnoucement(int(*houseStatus)[7])
{
	printf("마을 예상 피해\n");
	printf("위험 : %d채\n", countOneStatus(DANGEROUS, houseStatus));
	printf("매우 위험 : %d채\n", countOneStatus(TOO_DANGEROUS, houseStatus));
}