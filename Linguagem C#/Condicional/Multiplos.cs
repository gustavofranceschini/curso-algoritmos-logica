using System;
using System.Globalization;

namespace Multiplos {
    class Program {
        static void Main(string[] args) {
            CultureInfo CI = CultureInfo.InvariantCulture;

            int n1, n2;

            Console.WriteLine("Digite dois numeros inteiros:");
            n1 = int.Parse(Console.ReadLine());
            n2 = int.Parse(Console.ReadLine());

            if (n1 % n2 == 0 || n2 % n1 == 0) {
                Console.WriteLine("Sao multiplos");
            }
            else {
                Console.WriteLine("Nao sao multiplos");
            }
        }
    }
}
