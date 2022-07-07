using System;
using System.Globalization;

namespace Troco {
    class Program {
        static void Main(string[] args) {

            CultureInfo CI = CultureInfo.InvariantCulture;

            double precoUn, dinheiroRecebido, troco, precoTotal;
            int qnt;

            Console.Write("preco unitario do produto: ");
            precoUn = double.Parse(Console.ReadLine(),CI);
            Console.Write("Quantidade comprada: ");
            qnt = int.Parse(Console.ReadLine());
            Console.Write("Dinheiro recebido: ");
            dinheiroRecebido = double.Parse(Console.ReadLine(),CI);

            precoTotal = precoUn * qnt;
            troco = dinheiroRecebido - precoTotal;

            Console.WriteLine("TROCO = "+troco.ToString("F2",CI));
        }
    }
}
