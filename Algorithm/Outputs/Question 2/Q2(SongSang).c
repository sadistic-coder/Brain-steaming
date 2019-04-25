
#include<stdio.h>

int main()
{
    int h1, y1;
    int h2, y2;
    int h3, y3;
    int Arr[7][7] = { 0 };

    

    scanf("%d %d", &h1, &y1);
    scanf("%d %d", &h2, &y2);
    scanf("%d %d", &h3, &y3);
    printf("\n");

    for (int i = 0; i < 7; i++)
    {
        for (int j = 0; j < 7; j++)
        {
            Arr[h1 - 1][j] = 10;

            if (Arr[i][y1 - 1]==0) {
                Arr[i][y1 - 1] = 10;
            }
            
        }
        for (int j = 0; j < 7; j++)
        {
            Arr[h2 - 1][j] = 10;

            

            if (Arr[i][y2 - 1]==0) {
                Arr[i][y2 - 1] = 10;
            }
            
        }
        for (int j = 0; j < 7; j++)
        {
            Arr[h3 - 1][j] = 10;

            if (Arr[i][y3 - 1]==0) {
                Arr[i][y3 - 1] = 10;
            }
            
        }
        Arr[h1 -1][y1 - 1] = 100;
        Arr[h2 - 1][y2 - 1] = 100;
        Arr[h3 - 1][y3 - 1] = 100;
        
    }
    for (int i = 0; i < 7; i++)
    {
        for (int j = 0; j < 7; j++)
        {
            printf("%d        ", Arr[i][j]);
        }
        printf("\n");
    }


    int fire = 0;
    int boom = 0;

    for (int i = 0; i < 7; i++)
    {
        for (int j = 0; j < 7; j++)
        {
            if (Arr[i][j] == 10)
            {
                fire++;
            }
        }
    }

    for (int i = 0; i < 7; i++)
    {
        for (int j = 0; j < 7; j++)
        {
            if (Arr[i][j] == 100)
            {
                boom++;
            }
        }
    }

    printf("\n\n\n\n\n%d\n", fire);
    printf("%d", boom);
}