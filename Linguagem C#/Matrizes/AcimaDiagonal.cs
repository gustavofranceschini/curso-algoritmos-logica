using System;

namespace AcimaDiagonal {
    class Program {
        static void Main(string[] args) {

            int n,soma;

            Console.Write("Qual a ordem da matriz? ");
            n = int.Parse(Console.ReadLine());

            int[,] mat = new int[n, n];

            for (int i = 0; i < n; i++) {
                for (int j = 0; j < n; j++) {
                    Console.Write("Elemento ["+i+","+j+"]: ");
                    mat[i, j] = int.Parse(Console.ReadLine());
                };
            };

            soma = 0;
            for (int i = 0; i < n; i++) {
                for (int j = 0; j < n; j++) {
                    if (j > i) {
                        soma = soma + mat[i, j];
                    };
                };
            };
            Console.WriteLine("SOMA DOS ELEMENTOS ACIMA DA DIAGONAL PRINCIPAL = "+soma);
        }
    }
}
