import java.util.Locale;
import java.util.Scanner;

public class MediaPares {

	public static void main(String[] args) {
		Locale.setDefault(Locale.US);
		Scanner sc = new Scanner(System.in);
		
		int n,cont,soma;
		double media;
		
		System.out.print("Quantos elementos vai ter o vetor? ");
		n = sc.nextInt();
		
		int vet[] = new int[n];
		
		// Lendo o vetor
		for (int i=0;i<n;i++) {
			System.out.print("Digite um numero: ");
			vet[i] = sc.nextInt();			
		};
		
		// Media dos pares (caso houver)
		cont = 0;
		soma = 0;
		for (int i=0;i<n;i++) {
			if (vet[i] % 2 == 0) {
				cont++;	
				soma = soma + vet[i];				
			};			
		};
		
		if (cont == 0) {
			System.out.println("NENHUM NUMERO PAR");			
		}else {
			media = (double)soma / cont;
			System.out.println("MEDIA DOS PARES = "+String.format("%.1f", media));			
		};
		
		sc.close();
		

	}

}
