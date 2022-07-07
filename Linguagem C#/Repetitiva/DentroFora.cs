using System;

namespace DentroFora {
    class Program {
        static void Main(string[] args) {

            int n, x,contDentro,contFora;

            Console.Write("Quantos numeros voce vai digitar? ");
            n = int.Parse(Console.ReadLine());

            contDentro = 0;
            contFora = 0;
            for (int i= 1;i<=n;i++) {
                Console.Write("Digite um numero: ");
                x = int.Parse(Console.ReadLine());
                
                if (x >= 10 && x <= 20) {
                    contDentro++;
                }else {
                    contFora++;
                };
            };

            Console.WriteLine(contDentro+" DENTRO");
            Console.WriteLine(contFora+" FORA");
        }
    }
}
