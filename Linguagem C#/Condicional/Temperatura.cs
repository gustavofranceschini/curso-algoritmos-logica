using System;
using System.Globalization;

namespace Temperatura {
    class Program {
        static void Main(string[] args) {

            CultureInfo CI = CultureInfo.InvariantCulture;

            double c, f;
            char temperatura;

            Console.Write("Voce vai digitar a temperatura em qual escala (C/F): ");
            temperatura = char.Parse(Console.ReadLine());

            while (temperatura != 'C' && temperatura != 'F') {
                Console.WriteLine();
                Console.WriteLine("Temperatura invalida.. ");
                Console.WriteLine("Digite (C/F): ");
                temperatura = char.Parse(Console.ReadLine());
            };

            if (temperatura == 'C') {
                Console.Write("Digite a temperatura em Celsius: ");
                c = double.Parse(Console.ReadLine(), CI);
                f =(c * 9 / 5) + 32;
                Console.WriteLine("Temperatura equivalente em Fahrenheit: "+f.ToString("F2",CI));
            }else {
                Console.Write("Digite a temperatura em Fahrenheit: ");
                f = double.Parse(Console.ReadLine(), CI);
                c = (f - 32) * 5 / 9;
                Console.WriteLine("Temperatura equivalente em Celsius: "+c.ToString("F2",CI));
            }
        }
    }
}
