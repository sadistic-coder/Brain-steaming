#include<stdio.h>



int main()
{
    int map[10][10] = { 0 } ;
    for (int i = 0; i < 10; i++)            //map design
    {
        for (int j = 0; j < 10; j++)
        {
            map[0][j] = 1;
            map[9][j] = 1;
        }
        for (int j = 0; j < 10; j++)
        {
            map[j][0] = 1;
            map[j][9] = 1;
        }

    }
    



    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            printf("%d", map[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    map[1][4] = 1;
    map[2][8] = 1;




    int h = 0, y;
    scanf("%d",  &y);
    y--;
    map[0][y] = 5;



    while (1)
    {
        map[h][y] = 5;

        if (map[h][y+1] == 1)
        {
            h++;
            map[h][y] = 5;
        }
        else
        {
            y++;
            map[h][y] = 5;
        }
        if (map[h][y + 1] == 1 && map[h + 1][y] == 1)
        {
            break;
        }
    }

    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            printf("%d", map[i][j])    ;
        }
        printf("\n");
    }
    
    

}
