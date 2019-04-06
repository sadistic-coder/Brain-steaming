using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ConsoleApp6
{
    class Program
    {
        static void Main(string[] args)
        {
            int width = GetIntegerFromConsole("width");
            int height = GetIntegerFromConsole("height");

            if (CheckAvailableSquare(height, width))
            {
                PrintSquare(height, width);
            }
        }
        static bool CheckAvailableSquare(int heigth, int width)
        {
            return !(heigth <= 0 || width <= 0);
        }
        static int GetIntegerFromConsole()
        {
            Console.Write("값을 입력해주세요");
            return int.Parse(Console.ReadLine());
        }
        static int GetIntegerFromConsole(string message)
        {
            Console.Write($"{message}값을 입력해주세요");
            return int.Parse(Console.ReadLine());
        }
        static void PrintStar(int number)
        {
            for (int i = 0; i < number; i++)
            {
                Console.Write('*');
            }
        }
        static void PrintSquare(int height, int width)
        {
            for (int j = 0; j < height; j++)
            {
                PrintStar(width);
                Console.WriteLine();
            }
        }
    }
}
