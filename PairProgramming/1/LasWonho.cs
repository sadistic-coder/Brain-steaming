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

            if (figureObject.IsPrintable())
            {
                Tuple<int, int> shape = figureObject.GetShape();
                PrintSquare(shape);
            }
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
    class Square : IPrintable
    {
        private readonly int width;
        private readonly int heigth;
        public Square(int width, int heigth)
        {
            this.width = width;
            this.heigth = heigth;
        }
        public Tuple<int, int> GetShape()
        {
            return Tuple.Create(this.width, this.heigth);
        }
        public bool IsPrintable()
        {
            return !(width <= 0 || heigth <= 0);
        }
    }
    class Triangle : IPrintable
    {
        private readonly int width;
        private readonly int heigth;
        public Triangle(int width, int heigth)
        {
            this.width = width;
            this.heigth = heigth;
        }
        public Tuple<int, int> GetShape()
        {
            return Tuple.Create(this.width, this.heigth);
        }
        public bool IsPrintable() {
            return !(width <= 0 || heigth <= 0);
        }
    }
    interface IPrintable
    {
        Tuple<int, int> GetShape();
        bool IsPrintable();
    }
}
