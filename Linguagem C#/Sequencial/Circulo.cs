using System;
using System.Globalization;

namespace Circulo {
    class Program {
        static void Main(string[] args) {

            CultureInfo CI = CultureInfo.InvariantCulture;

            double raio, area;
            double pi = 3.14159;

            Console.Write("Digite o valor do raio do circulo: ");
            raio = double.Parse(Console.ReadLine(),CI);

            area = pi * (Math.Pow(raio, 2));

            Console.WriteLine("AREA = "+area.ToString("F3",CI));

        }
    }
}
