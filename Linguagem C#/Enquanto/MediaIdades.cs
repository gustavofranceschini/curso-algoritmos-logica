using System;
using System.Globalization;

namespace MediaIdades {
    class Program {
        static void Main(string[] args) {

            CultureInfo CI = CultureInfo.InvariantCulture;

            int idade,cont,soma;
            double media;

            Console.WriteLine("Digite as idades: ");
            idade = int.Parse(Console.ReadLine());

            cont = 0;
            soma = 0;
            if (idade <= 0) {
                Console.WriteLine("IMPOSSIVEL CALCULAR");
            }else {
                while (idade > 0) {
                    cont++;
                    soma = soma + idade;
                    idade = int.Parse(Console.ReadLine());
                };
                media = (double)soma / cont;
                Console.WriteLine("MEDIA = "+media.ToString("F2",CI));
            };
        }
    }
}
