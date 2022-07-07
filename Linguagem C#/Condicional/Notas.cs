using System;
using System.Globalization;

namespace Notas {
    class Program {
        static void Main(string[] args) {

            CultureInfo CI = CultureInfo.InvariantCulture;

            double n1, n2, notaFinal;

            Console.Write("Digite a primeira nota: ");
            n1 = double.Parse(Console.ReadLine(),CI);
            Console.Write("Digite a segunda nota: ");
            n2 = double.Parse(Console.ReadLine(),CI);

            notaFinal = n1 + n2;
            Console.WriteLine("NOTA FINAL = "+notaFinal.ToString("F1",CI));
            if (notaFinal >= 60.0) {
                Console.WriteLine("APROVADO");
            }else {
                Console.WriteLine("REPROVADO");
            };

        }
    }
}
