using System;
using System.Globalization;

namespace Pagamento {
    class Program {
        static void Main(string[] args) {

            CultureInfo CI = CultureInfo.InvariantCulture;

            double valorHora, salario;
            int horas;
            string nome;

            Console.Write("Nome: ");
            nome = Console.ReadLine();
            Console.Write("Valor por hora: ");
            valorHora = double.Parse(Console.ReadLine(),CI);
            Console.Write("Horas trabalhadas: ");
            horas = int.Parse(Console.ReadLine());

            salario = horas * valorHora;

            Console.WriteLine("O pagamento para "+nome+" deve ser "+salario.ToString("F2", CI));
        }
    }
}
