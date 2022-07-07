using System;

namespace NegativosMatriz {
    class Program {
        static void Main(string[] args) {

            int m, n;

            Console.Write("Qual a quantidade de linhas da matriz? ");
            m = int.Parse(Console.ReadLine());
            Console.Write("Qual a quantidade de colunas da matriz? ");
            n = int.Parse(Console.ReadLine());

            int[,] mat = new int[m, n];

            for (int i = 0; i < m; i++) {
                for(int j = 0; j < n; j++) {
                    Console.Write("Elemento ["+i+","+j+"]: ");
                    mat[i, j] = int.Parse(Console.ReadLine());
                };
            };

            Console.WriteLine("VALORES NEGATIVOS:");
            for (int i = 0; i < m; i++) {
                for (int j = 0; j < n; j++) {
                    if (mat[i,j] < 0) {
                        Console.WriteLine(mat[i,j]);
                    };
                };
            };
        }
    }
}
