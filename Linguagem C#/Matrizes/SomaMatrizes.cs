using System;

namespace SomaMatrizes {
    class Program {
        static void Main(string[] args) {

            int m, n;

            Console.Write("Quantas linhas vai ter cada matriz? ");
            m = int.Parse(Console.ReadLine());
            Console.Write("Quantas colunas vai ter cada matriz? ");
            n = int.Parse(Console.ReadLine());

            int[,] matA = new int[m, n];
            int[,] matB = new int[m, n];
            int[,] matC = new int[m, n];

            Console.WriteLine("Digite os valores da matriz A:");
            for (int i = 0; i < m; i++) {
                for (int j = 0; j < n; j++) {
                    matA[i,j] = int.Parse(Console.ReadLine());
                };
            };

            Console.WriteLine("Digite os valores da matriz B:");
            for (int i = 0; i < m; i++) {
                for (int j = 0; j < n; j++) {
                    matB[i,j] = int.Parse(Console.ReadLine());
                };
            };

            // Somando as matrizes A e B
            for (int i = 0; i < m; i++) {
                for (int j = 0; j < n; j++) {
                    matC[i, j] = matA[i, j] + matB[i, j];
                };
            };

            Console.WriteLine("MATRIZ SOMA:");
            for (int i = 0; i < m; i++) {
                for (int j = 0; j < n; j++) {
                    Console.Write(matC[i,j]+"  ");
                };
                Console.WriteLine("");
            };
        }

    }
}
