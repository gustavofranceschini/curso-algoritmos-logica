import java.util.Locale;
import java.util.Scanner;

public class AbaixoDaMedia {

	public static void main(String[] args) {
		Locale.setDefault(Locale.US);
		Scanner sc = new Scanner(System.in);
		
		int n;
		double soma,media;
		
		System.out.print("Quantos elementos vai ter o vetor? ");
		n = sc.nextInt();
		
		double vet[] = new double[n];
		
		// Lendo o vetor
		for (int i=0;i<n;i++) {
			System.out.print("Digite um numero: ");
			vet[i] = sc.nextDouble();			
		};
		
		System.out.println();
		// Soma e media dos vetores
		soma = 0;
		for (int i=0;i<n;i++) {
			soma = soma + vet[i];			
		};
		media = soma / n;
		System.out.println("MEDIA DO VETOR = "+String.format("%.3f", media));
		
		// Elemento abaixo da media
		System.out.println("ELEMENTOS ABAIXO DA MEDIA: ");
		for (int i=0;i<n;i++) {
			if (vet[i] < media) {
				System.out.println(vet[i]);				
			};			
		};
		
		sc.close();
	}

}
