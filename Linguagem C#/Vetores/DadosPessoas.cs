using System;
using System.Globalization;

namespace DadosPessoas {
    class Program {
        static void Main(string[] args) {

            CultureInfo CI = CultureInfo.InvariantCulture;

            int n,contF,contM;
            double soma,maiorAltura, menorAltura,media;


            Console.Write("Quantas pessoas serao digitadas? ");
            n = int.Parse(Console.ReadLine());

            double[] altura = new double[n];
            char[] genero = new char[n];

            for (int i = 0; i < n; i++) {
                Console.Write("Altura da "+(i+1)+"a pessoa: ");
                altura[i] = double.Parse(Console.ReadLine(),CI);
                Console.Write("Genero da "+(i+1)+"a pessoa: ");
                genero[i] = char.Parse(Console.ReadLine());

                    while (genero[i] != 'F' && genero[i] != 'M') {
                        Console.WriteLine("");
                        Console.WriteLine("Genero incorreto");
                        Console.Write("Digite (F/M): ");
                        genero[i] = char.Parse(Console.ReadLine());
                    };
            };
            menorAltura = altura[0];
            for (int i = 1; i < n; i++) {
                if (altura[i] < menorAltura) {
                    menorAltura = altura[i];
                };
            };            

            maiorAltura = altura[0];
            for (int i = 1; i < n; i++) {
                if (altura[i] > maiorAltura) {
                    maiorAltura = altura[i];
                };
            };

            Console.WriteLine("Menor Altura = " + menorAltura.ToString("F2", CI));
            Console.WriteLine("Maior Altura = " + maiorAltura.ToString("F2", CI));

            // Media altura das mulheres
            contF = 0;
            soma = 0;
            for (int i = 0; i < n; i++) {
                if (genero[i] == 'F') {
                    contF++;
                    soma = soma + altura[i];
                };
            };
            media = soma / contF;
            Console.WriteLine("Media das alturas das mulheres = "+media.ToString("F2",CI));

            contM = 0;
            contM = n - contF;
            Console.WriteLine("Numero de homens = "+contM);              
        }
    }
}
