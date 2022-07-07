using System;
using System.Globalization;

namespace Divisao {
    class Program {
        static void Main(string[] args) {

            CultureInfo CI = CultureInfo.InvariantCulture;

            int n;
            double num, den, divisao;

            Console.Write("Quantos casos voce vai digitar? ");
            n = int.Parse(Console.ReadLine());

            for (int i = 1; i <= n; i++) {
                Console.Write("Entre com o numerador: ");
                num = double.Parse(Console.ReadLine(), CI);
                Console.Write("Entre com o denominador: ");
                den = double.Parse(Console.ReadLine(), CI);

                if (den  <= 0) {
                    Console.WriteLine("DIVISAO IMPOSSIVEL");
                }else {
                    divisao = num / den;
                    Console.WriteLine("DIVISAO = "+divisao.ToString("F2",CI));
                };
            };
        }
    }
}
