using System;
using System.Globalization;

namespace TrocoVerificado {
    class Program {
        static void Main(string[] args) {

            CultureInfo CI = CultureInfo.InvariantCulture;

            double precoUn, dinheiroRecebido, troco, valorTotal;
            int qnt;

            Console.Write("Preco unitario do produto: ");
            precoUn = double.Parse(Console.ReadLine(),CI);
            Console.Write("Quantidade comprada: ");
            qnt = int.Parse(Console.ReadLine());
            Console.Write("Dinheiro recebido: ");
            dinheiroRecebido = double.Parse(Console.ReadLine(),CI);

            valorTotal = precoUn * qnt;
            
            if (dinheiroRecebido > valorTotal) {
                troco = dinheiroRecebido - valorTotal;
                Console.WriteLine("TROCO = "+troco.ToString("F2",CI));
            }else {
                troco = valorTotal - dinheiroRecebido;
                Console.WriteLine("DINHEIRO INSUFICIENTE, FALTAM "+troco.ToString("F2",CI)+" REAIS");
            }
        }
    }
}
