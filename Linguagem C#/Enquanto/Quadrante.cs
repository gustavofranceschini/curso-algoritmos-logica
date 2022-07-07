using System;
using System.Globalization;

namespace Quadrante {
    class Program {
        static void Main(string[] args) {

            CultureInfo CI = CultureInfo.InvariantCulture;

            double x, y;

            Console.WriteLine("Digite os valores das coordenadas X e Y:");
            x = double.Parse(Console.ReadLine(), CI);
            y = double.Parse(Console.ReadLine(), CI);

            while (x != 0 && y != 0) {
                if (x > 0 && y > 0) {
                    Console.WriteLine("QUADRANTE Q1");
                }else if(x < 0 && y > 0) {
                    Console.WriteLine("QUADRANTE Q2");
                }else if (x < 0 && y < 0) {
                    Console.WriteLine("QUADRANTE Q3");
                }else{
                    Console.WriteLine("QUADRANTE Q4");
                };
                Console.WriteLine("Digite os valores das coordenadas X e Y:");
                x = double.Parse(Console.ReadLine(), CI);
                y = double.Parse(Console.ReadLine(), CI);
            };
        }
    }
}
