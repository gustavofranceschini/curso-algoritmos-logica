using System;
using System.Globalization;

namespace Glicose {
    class Program {
        static void Main(string[] args) {

            CultureInfo CI = CultureInfo.InvariantCulture;

            double glicose;

            Console.Write("Digite a medida da glicose: ");
            glicose = double.Parse(Console.ReadLine(),CI);

            if (glicose <= 100) {
                Console.WriteLine("Classificação: Normal");
            }else if (glicose <= 140) {
                Console.WriteLine("Classificaçao: Elevado");
            }else {
                Console.WriteLine("Classificação: Diabetes");
            };
        }
    }
}
