using System;
using System.Globalization;

namespace MaiorPosicao {
    class Program {
        static void Main(string[] args) {

            CultureInfo CI = CultureInfo.InvariantCulture;

            int n,posMaior;
            double maiorValor;

            Console.Write("Quantos numeros voce vai digitar? ");
            n = int.Parse(Console.ReadLine());

            double[] vet = new double[n];

            for (int i = 0; i < n; i++) {
                Console.Write("Digite um numero: ");
                vet[i] = double.Parse(Console.ReadLine(), CI);
            };

            // Achando o maior valor e a sua posicao
            maiorValor = vet[0];
            posMaior = 0;
            for (int i = 1; i < n; i++) {
                if (vet[i] > maiorValor) {
                    maiorValor = vet[i];
                    posMaior = i;
                };
            };
            Console.WriteLine("");
            Console.WriteLine("MAIOR VALOR = "+maiorValor.ToString("F1",CI));
            Console.WriteLine("POSICAO DO MAIOR VALOR = "+posMaior);
        }
    }
}
