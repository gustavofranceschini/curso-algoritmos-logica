using System;

namespace CadaLinha {
    class Program {
        static void Main(string[] args) {

            int n,maior;

            Console.Write("Qual a ordem da matriz? ");
            n = int.Parse(Console.ReadLine());

            int[,] mat = new int[n, n];


            for (int i = 0; i < n; i++) {
                for (int j = 0; j < n; j++) {
                    Console.Write("Elemento ["+i+","+j+"]: ");
                    mat[i, j] = int.Parse(Console.ReadLine());
                };
            };

            Console.WriteLine("MAIOR ELEMENTO DE CADA LINHA:");
            for (int i = 0; i < n; i++) {
                maior = 0;
                for (int j = 0; j < n; j++) {
                    if(mat[i,j] > maior) {
                        maior = mat[i, j];
                    };                    
                };
                Console.WriteLine(maior);
            };
        }
    }
}
