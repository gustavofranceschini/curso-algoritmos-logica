using System;

namespace Tabuada {
    class Program {
        static void Main(string[] args) {

            int n,soma;

            Console.Write("Deseja a tabuada para qual valor? ");
            n = int.Parse(Console.ReadLine());

            for (int i = 1; i <= 10; i++) {
                soma = i * n;
                Console.WriteLine(n+" x "+i+" = "+soma);
            };
        }
    }
}




