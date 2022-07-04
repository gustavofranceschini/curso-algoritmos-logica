import java.util.Locale;
import java.util.Scanner;

public class Experiencias {

	public static void main(String[] args) {
		Locale.setDefault(Locale.US);
		Scanner sc = new Scanner(System.in);

		int n,qnt,cobaiaCoelho,cobaiaRato,cobaiaSapo,totalCobaia;
		char tipoCobaia;
		double porcCoelho,porcRato,porcSapo;
		
		cobaiaCoelho = 0;
		cobaiaRato = 0;
		cobaiaSapo = 0;
		totalCobaia = 0;
		
		System.out.print("Quantos casos de teste serao digitados: ");
		n = sc.nextInt();
		
		// Lendo os casos de teste
		for (int i=1;i<=n;i++) {
			System.out.print("Quantidade de cobaias: ");
			qnt = sc.nextInt();
			System.out.print("Tipo de cobaia: ");
			tipoCobaia = sc.next().charAt(0);
			
				while (tipoCobaia != 'C' && tipoCobaia != 'S' && tipoCobaia != 'R') {
				
				System.out.println("Tipo de cobaia invalido..");
				System.out.print("Digite o tipo de cobaia novamente: ");
				tipoCobaia = sc.next().charAt(0);
			    };
			  
				  if (tipoCobaia == 'C') {
						cobaiaCoelho = cobaiaCoelho + qnt;				
					}else if (tipoCobaia == 'S') {
						cobaiaSapo = cobaiaSapo + qnt;
					}else {
						cobaiaRato = cobaiaRato + qnt;
					};
		};
		
		totalCobaia = cobaiaCoelho + cobaiaRato + cobaiaSapo;
		porcCoelho = (double)cobaiaCoelho / totalCobaia * 100.0;
		porcRato = (double)cobaiaRato / totalCobaia * 100.0;
		porcSapo = (double)cobaiaSapo / totalCobaia * 100.0;
		
		System.out.println();
		System.out.println("RELATORIO FINAL:");
		System.out.println("Total: "+totalCobaia+" cobaias");
		System.out.println("Total de coelhos: "+cobaiaCoelho);
		System.out.println("Total de ratos: "+cobaiaRato);
		System.out.println("Total de sapos: "+cobaiaSapo);
		System.out.println("Percentual de Coelhos: "+String.format("%.2f", porcCoelho));
		System.out.println("Percentual de Ratos: "+String.format("%.2f", porcRato));		
		System.out.println("Percentual de Sapos: "+String.format("%.2f", porcSapo));
		
		
		sc.close();
	}

}
