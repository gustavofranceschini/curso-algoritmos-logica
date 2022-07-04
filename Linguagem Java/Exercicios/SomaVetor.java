import java.util.Locale;
import java.util.Scanner;

public class SomaVetor {

	public static void main(String[] args) {
		Locale.setDefault(Locale.US);
		Scanner sc = new Scanner(System.in);
		
		int n;
		double soma,media;
		
		System.out.print("Quantos numeros voce vai digitar? ");
		n = sc.nextInt();
		
		double vet[] = new double[n];
		
		// Lendo o vetor
		for (int i=0;i<n;i++) {
			System.out.print("Digite um numero: ");
			vet[i] = sc.nextDouble();
		};
		
		System.out.println();
		// Imprimindo o vetor
		System.out.print("VALORES = ");
		for (int i=0;i<n;i++) {
			System.out.print(vet[i]+"  ");			
		};
		
		//Somando e fazendo a média
		soma = 0;
		for (int i=0;i<n;i++) {
			soma = soma + vet[i];			
		};
		media = soma / n;
		System.out.println();
		System.out.println("SOMA = "+String.format("%.2f", soma));
		System.out.println("MEDIA = "+String.format("%.2f", media));
		
		sc.close();

	}

}
