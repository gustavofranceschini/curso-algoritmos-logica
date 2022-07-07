using System;
using System.Globalization;

namespace MatrizGeral {
    class Program {
        static void Main(string[] args) {

            CultureInfo CI = CultureInfo.InvariantCulture;

            int n,linha,coluna;
            double soma;

            Console.Write("Qual a ordem da matriz? ");
            n = int.Parse(Console.ReadLine());

            double[,] mat = new double[n, n];

            for (int i = 0; i < n; i++) {
                for (int j = 0; j < n; j++) {
                    Console.Write("Elemento ["+i+","+j+"]: ");
                    mat[i, j] = double.Parse(Console.ReadLine(),CI);
                };
            };
            Console.WriteLine("");
            //Soma dos positivos
            soma = 0;
            for (int i = 0; i < n; i++) {
                for (int j = 0; j < n; j++) {
                    if (mat[i,j] > 0) {
                        soma = soma + mat[i, j];
                    };
                };
            };
            Console.WriteLine("SOMA DOS POSITIVOS = " + soma.ToString("F1",CI));
            Console.WriteLine("");

            Console.Write("Escolha uma linha: ");
            linha = int.Parse(Console.ReadLine());
            Console.Write("LINHA ESCOLHIDA: ");
                for (int j=0;j<n;j++) {
                    Console.Write(mat[linha,j].ToString("F1", CI) + "  ");
                };
            Console.WriteLine("");
            Console.WriteLine("");

            Console.Write("Escolha uma coluna: ");
            coluna = int.Parse(Console.ReadLine());
            Console.Write("COLUNA ESCOLHIDA: ");
                for (int i = 0; i < n; i++) {
                    Console.Write(mat[i, coluna].ToString("F1",CI) + "  ");
                };
            Console.WriteLine("");
            Console.WriteLine("");

            // Diagonal principal
            Console.Write("DIAGONAL PRINCIPAL: ");
            for (int i = 0; i < n; i++) {
                for (int j = 0; j < n; j++) {
                    if (j == i) {
                        Console.Write(mat[i,j].ToString("F1", CI) + "  ");
                    };

                };
            };
            Console.WriteLine("");
            Console.WriteLine();

            //Alterando os numeros negativos
            for (int i = 0; i < n; i++) {
                for (int j = 0; j < n; j++) {
                    if (mat[i,j] < 0) {
                        mat[i, j] = mat[i, j] * mat[i, j];
                    };
                };
            };
            //Imprimindo a matriz alterada
            Console.WriteLine("MATRIZ ALTERADA:");
            for (int i = 0; i < n; i++) {
                for (int j = 0; j < n; j++) {
                      Console.Write(mat[i, j].ToString("F1",CI) + "  ");
                };
                Console.WriteLine("");
            };



        }
    }
}
