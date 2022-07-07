using System;
using System.Globalization;

namespace Alturas {
    class Program {
        static void Main(string[] args) {

            CultureInfo CI = CultureInfo.InvariantCulture;

            int n,cont;
            double soma,media,porcentagem;

            Console.Write("Quantos pessoas serao digitadas? ");
            n = int.Parse(Console.ReadLine());


            string[] nome = new string[n];
            int[] idade = new int[n];
            double[] altura = new double[n];

            for (int i = 0; i < n; i++) {
                Console.WriteLine("Dados da "+(i+1)+"a pessoa:");
                Console.Write("Nome: ");
                nome[i] = Console.ReadLine();
                Console.Write("Idade: ");
                idade[i] = int.Parse(Console.ReadLine());
                Console.Write("Altura: ");
                altura[i] = double.Parse(Console.ReadLine(), CI);
            };

            Console.WriteLine("");
            // Altura media
            soma = 0;
            for (int i = 0; i < n; i++) {
                soma = soma + altura[i];
            };
            media = soma / n;
            Console.WriteLine("Altura media: "+media.ToString("F2",CI));

            //Pessoas com menos de 16 anos
            cont = 0;
            for (int i=0;i<n;i++) {
                if (idade[i] < 16) {
                    cont++;
                };
            };
            porcentagem = (cont * 100.0) / n;
            Console.WriteLine("Pessoas com menos de 16 anos: "+porcentagem.ToString("F1",CI)+"%");

            for (int i=0;i<n;i++) {
                if (idade[i] < 16) {
                    Console.WriteLine(nome[i]);
                };
            };
        }
    }
}
