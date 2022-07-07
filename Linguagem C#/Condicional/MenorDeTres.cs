using System;
using System.Globalization;

namespace MenorDeTres {
    class Program {
        static void Main(string[] args) {

            CultureInfo CI = CultureInfo.InvariantCulture;

            int v1, v2, v3, menor;

            Console.Write("Primeiro valor: ");
            v1 = int.Parse(Console.ReadLine());
            Console.Write("Segunda valor: ");
            v2 = int.Parse(Console.ReadLine());
            Console.Write("Terceiro valor: ");
            v3 = int.Parse(Console.ReadLine());

            if (v1 < v2 && v1 < v3) {
                menor = v1;
            } else if (v2 < v3) {
                menor = v2;
            }else{
                menor = v3;
            };

            Console.WriteLine("MENOR = "+menor);
        }
    }
}
