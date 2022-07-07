using System;
using System.Globalization;

namespace MediaPonderada {
    class Program {
        static void Main(string[] args) {

            CultureInfo CI = CultureInfo.InvariantCulture;
            int n;
            double n1, n2, n3, media;

            Console.Write("Quantos casos voce vai digitar? ");
            n = int.Parse(Console.ReadLine());

            for (int i = 1; i <= n; i++) {
                Console.WriteLine("Digite tres numeros: ");
                n1 = double.Parse(Console.ReadLine(), CI);
                n2 = double.Parse(Console.ReadLine(), CI);
                n3 = double.Parse(Console.ReadLine(), CI);

                media = (n1*2+n2*3+n3*5) / 10;
                Console.WriteLine("MEDIA = "+media.ToString("F1",CI));
            };
        }
    }
}
