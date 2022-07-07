using System;
using System.Globalization;

namespace Fatorial {
    class Program {
        static void Main(string[] args) {

            CultureInfo CI = CultureInfo.InvariantCulture;

            int fat, n;

            Console.Write("Digite o valor de N: ");
            n = int.Parse(Console.ReadLine());

            fat = 1;

            for (int i=1;i<=n;i++) {
                fat = fat * i;
            };
            Console.WriteLine("FATORIAL = "+fat);
        }
    }
}
