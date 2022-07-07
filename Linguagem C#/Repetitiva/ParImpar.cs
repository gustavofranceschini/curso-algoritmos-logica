using System;

namespace ParImpar {
    class Program {
        static void Main(string[] args) {

            int n, x;

            Console.Write("Quantos numeros voce vai digitar? ");
            n = int.Parse(Console.ReadLine());

            for (int i = 1; i <= n; i++) {
                Console.Write("Digite um numero: ");
                x = int.Parse(Console.ReadLine());

                if (x % 2 == 0 && x > 0) {
                    Console.WriteLine("PAR POSITIVO");
                }else if(x % 2 ==0 && x < 0) {
                    Console.WriteLine("PAR NEGATIVO");
                }else if(x % 2 != 0 && x > 0) {
                    Console.WriteLine("IMPAR POSITIVO");
                }else if (x % 2 != 0 && x < 0) {
                    Console.WriteLine("IMPAR NEGATIVO");
                }else {
                    Console.WriteLine("NULO");
                };
            };
        }
    }
}
