using System;
using System.Globalization;

namespace Aprovados {
    class Program {
        static void Main(string[] args) {

            CultureInfo CI = CultureInfo.InvariantCulture;

            int n;

            Console.Write("Quantos alunos serao digitados? ");
            n = int.Parse(Console.ReadLine());

            string[] nome = new string[n];
            double[] n1 = new double[n];
            double[] n2 = new double[n];
            double[] soma = new double[n];
            double[] media = new double[n];

            for (int i=0;i<n; i++) {
                Console.WriteLine("Digite nome, primeira e segunda nota do "+(i+1)+"o aluno:");
                nome[i] = Console.ReadLine();
                n1[i] = double.Parse(Console.ReadLine(),CI);
                n2[i] = double.Parse(Console.ReadLine(),CI);
            };
                        
            for (int i = 0; i < n; i++) {
                soma[i] = n1[i] + n2[i];
            };

            for (int i = 0; i < n; i++) {
                media[i] = soma[i] / 2;
            };
            Console.WriteLine("Alunos aprovados:");
            for (int i=0;i<n;i++) {
                if (media[i] >= 6.0) {
                    Console.WriteLine(nome[i]);
                };
            };
                  
        }
    }
}
