using System;
using System.Globalization;

namespace MediaPares {
    class Program {
        static void Main(string[] args) {

            CultureInfo CI = CultureInfo.InvariantCulture;

            int n,cont,soma;
            double media;

            Console.Write("Quantos elementos vai ter o vetor? ");
            n = int.Parse(Console.ReadLine());

            int[] vet = new int[n];

            for (int i = 0; i < n; i++) {
                Console.Write("Digite um numero: ");
                vet[i] = int.Parse(Console.ReadLine());
            };

            //Se houver par, fazer a media
            cont = 0;
            soma = 0;
            for (int i = 0; i < n; i++) {
                if (vet[i] % 2 == 0) {
                    cont++;
                    soma = soma + vet[i];
                };
            };

            if (cont == 0) {
                Console.WriteLine("NENHUM NUMERO PAR");
            }else {
                media = (double)soma / cont;
                Console.WriteLine("MEDIA DOS PARES = " + media.ToString("F1",CI));
            }
        }
    }
}

