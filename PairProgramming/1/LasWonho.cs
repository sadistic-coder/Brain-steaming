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

            Square figureObject = new Square(width, height);

            Tuple<int, int> shape = figureObject.GetShape();

            if (CheckAvailableSquare(shape))
            {
                PrintSquare(shape);
            }
        }
        static bool CheckAvailableSquare(Tuple<int, int> shape)
        {
            return !(shape.Item1 <= 0 || shape.Item2 <= 0);
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
        static void PrintSquare(Tuple<int, int> shape)
        {
            for (int j = 0; j < shape.Item2; j++)
            {
                PrintStar(shape.Item1);
                Console.WriteLine();
            }
        }
        static void PrintTriangle(Tuple<int, int> shape)
        {
            for (int j = 0; j < shape.Item2; j++)
            {
                PrintStar(shape.Item1 - j);
                Console.WriteLine();
            }
        }
    }
    class Square
    {
        private int width = 0;
        private int heigth = 0;
        public Square(int width, int heigth)
        {
            this.width = width;
            this.heigth = heigth;
        }
        public Tuple<int, int> GetShape()
        {
            return Tuple.Create(this.width, this.heigth);
        }
    }
    class Triangle
    {
        private int width = 0;
        private int heigth = 0;
        public Triangle(int width, int heigth)
        {
            this.width = width;
            this.heigth = heigth;
        }
        public Tuple<int, int> GetShape()
        {
            return Tuple.Create(this.width, this.heigth);
        }
    }
}
