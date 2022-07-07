using System;
using System.Globalization;

namespace Medidas {
    class Program {
        static void Main(string[] args) {

            CultureInfo CI = CultureInfo.InvariantCulture;

            double a, b, c, areaQuadrado, areaTriangulo, areaTrapezio;

            Console.Write("Digite a medida A: ");
            a = double.Parse(Console.ReadLine(),CI);
            Console.Write("Digite a medida B: ");
            b = double.Parse(Console.ReadLine(), CI);
            Console.Write("Digite a medida C: ");
            c = double.Parse(Console.ReadLine(), CI);

            areaQuadrado = a * a;
            areaTriangulo = (a * b) / 2;
            areaTrapezio = ((a + b) * c) / 2;

            Console.WriteLine("AREA DO QUADRADO = "+areaQuadrado.ToString("F4",CI));
            Console.WriteLine("AREA DO TRIANGULO = "+areaTriangulo.ToString("F4",CI));
            Console.WriteLine("AREA DO TRAPEZIO = "+areaTrapezio.ToString("F4",CI));
        }
    }
}
