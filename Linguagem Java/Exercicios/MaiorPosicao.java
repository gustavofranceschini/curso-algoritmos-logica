import java.util.Locale;
import java.util.Scanner;

public class MaiorPosicao {

	public static void main(String[] args) {
		Locale.setDefault(Locale.US);
		Scanner sc = new Scanner(System.in);
		
		
		int n,posMaior;
		double maiorValor;
		
		System.out.print("Quantos numeros voce vai digitar? ");
		n = sc.nextInt();
		
		double vet[] = new double[n];
		
		//Lendo o vetor
		for (int i= 0;i<n;i++) {
			System.out.print("Digite um numero: ");
			vet[i] = sc.nextDouble();					
		};
		
		// Achando o maior valor e sua posicao
		posMaior = 0;
		maiorValor = vet[0];
		for (int i=1;i<n;i++) {
			if (vet[i] > maiorValor) {
				maiorValor = vet[i];
				posMaior = i;				
			};			
		};
		
		System.out.println();
		System.out.println("MAIOR VALOR = "+String.format("%.1f", maiorValor));
		System.out.println("POSICAO DO MAIOR VALOR = "+posMaior);
		sc.close();
				
		
	}

}
