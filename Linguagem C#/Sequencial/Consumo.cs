using System;
using System.Globalization;

namespace Consumo {
    class Program {
        static void Main(string[] args) {

            CultureInfo CI = CultureInfo.InvariantCulture;

            double distancia, combustivel, consumoMedio;

            Console.Write("Distancia percorrida: ");
            distancia = double.Parse(Console.ReadLine(),CI);
            Console.Write("Combustivel gasto: ");
            combustivel = double.Parse(Console.ReadLine(),CI);

            consumoMedio = distancia / combustivel;

            Console.WriteLine("Consumo media = "+consumoMedio.ToString("F3",CI));
        }
    }
}
