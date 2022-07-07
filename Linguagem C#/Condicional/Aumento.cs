using System;
using System.Globalization;

namespace Aumento {
    class Program {
        static void Main(string[] args) {
            CultureInfo CI = CultureInfo.InvariantCulture;

            double salario, novoSalario, aumento;
            int porcentagem;

            Console.Write("Digite o salario da pessoa: ");
            salario = double.Parse(Console.ReadLine(), CI);

            if (salario <= 1000.00) {
                porcentagem = 20;
            }else if (salario <= 3000.00) {
                porcentagem = 15;
            }else if (salario <= 8000.00) {
                porcentagem = 10;
            }else {
                porcentagem = 5;
            };

            aumento = (salario / 100) * porcentagem;
            novoSalario = salario + aumento;

            Console.WriteLine("Novo salario = "+novoSalario.ToString("F2",CI));
            Console.WriteLine("Aumeto = "+aumento.ToString("F2",CI));
            Console.WriteLine("Porcentagem = "+porcentagem+"%");
        }
    }
}
