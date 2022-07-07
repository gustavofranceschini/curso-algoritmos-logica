using System;
using System.Globalization;

namespace Operadora {
    class Program {
        static void Main(string[] args) {

            CultureInfo CI = CultureInfo.InvariantCulture;

            int qnt;
            double valorTotal;

            Console.Write("Digite a quantidade de minutos: ");
            qnt = int.Parse(Console.ReadLine());

            if (qnt <= 100) {
                valorTotal = 50.00;

            }else {
                valorTotal = ((qnt - 100) * 2.00) + 50.00;
            };

            Console.WriteLine("Valor a pagar: "+valorTotal.ToString("F2",CI));
        }
    }
}
