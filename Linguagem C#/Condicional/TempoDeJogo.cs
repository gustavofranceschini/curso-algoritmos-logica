using System;
using System.Globalization;

namespace TempoDeJogo {
    class Program {
        static void Main(string[] args) {
            CultureInfo CI = CultureInfo.InvariantCulture;

            int horaInicial, horaFinal, duracao;

            Console.Write("Hora inicial: ");
            horaInicial = int.Parse(Console.ReadLine());
            Console.Write("Hora final: ");
            horaFinal = int.Parse(Console.ReadLine());

            if (horaInicial > horaFinal) {
                duracao = (24 - horaInicial) + horaFinal;
            }else if(horaFinal > horaInicial) {
                duracao = horaFinal - horaInicial;
            }
            else {
                duracao = 24;
            };

            Console.WriteLine("O jogo durou "+duracao+" hora(s)");
        }
    }
}
