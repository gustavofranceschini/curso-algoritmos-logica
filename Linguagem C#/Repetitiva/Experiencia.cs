using System;
using System.Globalization;

namespace Experiencias {
    class Program {
        static void Main(string[] args) {

            CultureInfo CI = CultureInfo.InvariantCulture;

            int n, qnt,totalCoelho,totalRato,totalSapo,totalCobaia;
            char tipoCobaia;
            double porcRatos, porcCoelhos, porcSapos;

            Console.Write("Quantos casos de teste serao digitados? ");
            n = int.Parse(Console.ReadLine());

            totalCoelho = 0;
            totalRato = 0;
            totalCobaia = 0;
            totalSapo = 0;

            for (int i = 1; i <= n; i++) {
                Console.Write("Quantidade de cobaias: ");
                qnt = int.Parse(Console.ReadLine());
                Console.Write("Tipo de cobaia: ");
                tipoCobaia = char.Parse(Console.ReadLine());
                
                while (tipoCobaia != 'C' && tipoCobaia != 'S' && tipoCobaia != 'R') {
                    Console.WriteLine("");
                    Console.WriteLine("Tipo de cobaia incorreta..");
                    Console.Write("Digite (C/S/R): ");
                    tipoCobaia = char.Parse(Console.ReadLine());
                };

                        switch (tipoCobaia) {
                            case 'C':
                                totalCoelho = qnt + totalCoelho;
                                break;
                            case 'R':
                                totalRato = qnt + totalRato;
                                break;
                            case 'S':
                                totalSapo = qnt + totalSapo;
                                break; 
                        };
            };
            totalCobaia = totalCoelho + totalRato + totalSapo;
            porcCoelhos = (double)totalCoelho / totalCobaia * 100.0;
            porcRatos = (double)totalRato / totalCobaia * 100.0;
            porcSapos = (double)totalSapo / totalCobaia * 100.0;

            Console.WriteLine("");
            Console.WriteLine("RELATORIO FINAL: ");
            Console.WriteLine("Total: "+totalCobaia+" cobaias");
            Console.WriteLine("Total de coelhos: "+totalCoelho);
            Console.WriteLine("Total de ratos: "+totalRato);
            Console.WriteLine("Total de sapos: "+totalSapo);
            Console.WriteLine("Percentual de coelhos: " + porcCoelhos.ToString("F2",CI));
            Console.WriteLine("Percentual de ratos: " + porcRatos.ToString("F2", CI));
            Console.WriteLine("Percentual de sapos: " + porcSapos.ToString("F2", CI));

        }
    }
}
