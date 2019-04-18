#include <stdio.h>
#include <string.h>
int main()
{
    int input_num, count = 0;
    scanf_s("%d", &input_num);

    while (input_num != 1) {
        printf("%d ", input_num);
        if (input_num % 3 == 0) {
            input_num = input_num / 3;
        }
        else if (input_num % 3 == 1) {
            input_num = 5 * input_num - 2;
        }
        else if (input_num % 3 == 2) {
            input_num = 5 * input_num - 1;
        }
        count++;
    }

    printf("%d ", input_num);
    printf("%d", count);

    return 0;
}