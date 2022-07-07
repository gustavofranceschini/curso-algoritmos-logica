using System;
using System.Globalization;

namespace ValidacaoDeNota {
    class Program {
        static void Main(string[] args) {

            CultureInfo CI = CultureInfo.InvariantCulture;

            double n1,n2,media;

            Console.Write("Digite a primeira nota: ");
            n1 = double.Parse(Console.ReadLine(), CI);
            
            while (n1 <0 || n1 > 10) {
                Console.Write("Valor invalido.. Tente novamente: ");
                n1 = double.Parse(Console.ReadLine(), CI);
            };

            Console.Write("Digite a segunda nota: ");
            n2 = double.Parse(Console.ReadLine(), CI);

            while (n2 < 0 || n2 > 10) {
                Console.Write("Valor invalido.. Tente novamente: ");
                n2 = double.Parse(Console.ReadLine(), CI);
            };

            media = (n1 + n2) / 2;
            Console.WriteLine("MEDIA = "+media.ToString("F2",CI));
        }
    }
}
