using System;
using System.Globalization;

namespace Lanchonete {
    class Program {
        static void Main(string[] args) {

            CultureInfo CI = CultureInfo.InvariantCulture;

            double valorTotal;
            int qnt, codigo;

            Console.Write("Codigo do produto comprado: ");
            codigo = int.Parse(Console.ReadLine());

            switch (codigo) {
                case 1:
                    Console.Write("Digite a quantidade desejada: ");
                    qnt = int.Parse(Console.ReadLine());
                    valorTotal = qnt * 5.00;
                    Console.WriteLine("Valor a pagar: "+valorTotal.ToString("F2",CI));
                    break;
                case 2:
                    Console.Write("Digite a quantidade desejada: ");
                    qnt = int.Parse(Console.ReadLine());
                    valorTotal = qnt * 3.50;
                    Console.WriteLine("Valor a pagar: " + valorTotal.ToString("F2", CI));
                    break;
                case 3:
                    Console.Write("Digite a quantidade desejada: ");
                    qnt = int.Parse(Console.ReadLine());
                    valorTotal = qnt * 4.80;
                    Console.WriteLine("Valor a pagar: " + valorTotal.ToString("F2", CI));
                    break;
                case 4:
                    Console.Write("Digite a quantidade desejada: ");
                    qnt = int.Parse(Console.ReadLine());
                    valorTotal = qnt * 8.90;
                    Console.WriteLine("Valor a pagar: " + valorTotal.ToString("F2", CI));
                    break;
                case 5:
                    Console.Write("Digite a quantidade desejada: ");
                    qnt = int.Parse(Console.ReadLine());
                    valorTotal = qnt * 7.32;
                    Console.WriteLine("Valor a pagar: " + valorTotal.ToString("F2", CI));
                    break;
                default:
                    Console.WriteLine("Código invalido !!");
                    break;
            };
        }
    }
}
