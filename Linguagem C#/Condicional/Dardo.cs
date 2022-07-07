using System;
using System.Globalization;

namespace Dardo {
    class Program {
        static void Main(string[] args) {

            CultureInfo CI = CultureInfo.InvariantCulture;

            double d1, d2, d3, maior;

            Console.WriteLine("Digite as tres distancias:");
            d1 = double.Parse(Console.ReadLine(),CI);
            d2 = double.Parse(Console.ReadLine(),CI);
            d3 = double.Parse(Console.ReadLine(), CI);

            if (d1 > d2 && d1 > d3) {
                maior = d1;
            }else if (d2 > d3) {
                maior = d2;
            }else {
                maior = d3;
            }

            Console.WriteLine("MAIOR DISTANCIA = "+maior.ToString("F2",CI));
        }
    }
}
