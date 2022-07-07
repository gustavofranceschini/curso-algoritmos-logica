using System;
using System.Globalization;

namespace AbaixoDaMedia {
    class Program {
        static void Main(string[] args) {

            CultureInfo CI = CultureInfo.InvariantCulture;

            int n;
            double soma, media;

            Console.Write("Quantos elementos vai ter o vetor? ");
            n = int.Parse(Console.ReadLine());

            double[] vet = new double[n];

            for (int i = 0; i < n; i++) {
                Console.Write("Digite um numero: ");
                vet[i] = double.Parse(Console.ReadLine(), CI);
            };

            //Somando o vetor e fazendo a media
            soma = 0;
            for (int i = 0; i < n; i++) {
                soma = soma + vet[i];
            };
            media = soma / n;
            Console.WriteLine("");
            Console.WriteLine("MEDIA DO VETOR = " + media.ToString("F3",CI));

            Console.WriteLine("ELEMENTOS ABAIXO DA MEDIA:");
            for (int i = 0; i < n; i++) {
                if (vet[i] < media) {
                    Console.WriteLine(vet[i].ToString("F1",CI));
                };
            };
        }
    }
}
