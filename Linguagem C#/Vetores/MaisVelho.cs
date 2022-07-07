using System;

namespace MaisVelho {
    class Program {
        static void Main(string[] args) {

            int n,posMaior,maisVelho;

            Console.Write("Quantas pessoas voce vai digitar? ");
            n = int.Parse(Console.ReadLine());

            int[] idade = new int[n];
            string[] nome = new string[n];

            for (int i=0;i<n;i++) {
                Console.WriteLine("Dados da "+(i+1)+"a pessoa:");
                Console.Write("Nome: ");
                nome[i] = Console.ReadLine();
                Console.Write("idade: ");
                idade[i] = int.Parse(Console.ReadLine());
            };

            // Achando a pessoa mais velha
            maisVelho = idade[0];
            posMaior = 0;
            for (int i = 1; i < n; i++) {
                if (idade[i] > maisVelho) {
                    maisVelho = idade[i];
                    posMaior = i;
                };
            };
            Console.WriteLine("PESSOA MAIS VELHA: "+nome[posMaior]);
        }
    }
}
