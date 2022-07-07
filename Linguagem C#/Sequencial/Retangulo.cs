using System;
using System.Globalization;

namespace Retangulo {
    class Program {
        static void Main(string[] args) {

            CultureInfo CI = CultureInfo.InvariantCulture;
            double Base, altura, area, perimetro, diagonal;

            Console.Write("Base do retangulo: ");
            Base = double.Parse(Console.ReadLine(),CI);
            Console.Write("Altura do retangulo: ");
            altura = double.Parse(Console.ReadLine(),CI);

            area = altura * Base;
            perimetro = 2 * (altura + Base);
            diagonal = Math.Sqrt(Math.Pow(altura,2) + Math.Pow(Base,2));

            Console.WriteLine("AREA = "+area.ToString("F4",CI));
            Console.WriteLine("PERIMETRO = "+perimetro.ToString("F4",CI));
            Console.WriteLine("DIAGONAL = "+diagonal.ToString("F4",CI));
        }
    }
}
