using System;
using System.Globalization;

namespace Terreno {
    class Program {
        static void Main(string[] args) {

            CultureInfo CI = CultureInfo.InvariantCulture;
            double larg, comp, valorMetro, valorTerreno, area;

            Console.Write("Digite a largura do terreno: ");
            larg = double.Parse(Console.ReadLine(), CI);
            Console.Write("Digite o comprimento do terreno: ");
            comp = double.Parse(Console.ReadLine(), CI);
            Console.Write("Digite o valor do metro quadrado: ");
            valorMetro = double.Parse(Console.ReadLine(), CI);

            area = larg * comp;
            valorTerreno = area * valorMetro;

            Console.WriteLine("Area do terreno = " + area.ToString("F2", CI));
            Console.WriteLine("Preco do terreno = " + valorTerreno.ToString("F2", CI));

        }
    }
}
