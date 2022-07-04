import java.util.Locale;
import java.util.Scanner;

public class NumerosPares {

	public static void main(String[] args) {
		Locale.setDefault(Locale.US);
		Scanner sc = new Scanner(System.in);
		
		int n,cont;	
		
		
		System.out.print("Quantos numeros voce vai digitar? ");
		n = sc.nextInt();
		
		int vet[] = new int[n];
		
		// Lendo vetor
		for (int i=0;i<n;i++) {
			System.out.print("Digite um numero: ");
			vet[i] = sc.nextInt();			
		};
		System.out.println();
		
		System.out.println("NUMEROS PARES:");
		cont = 0;
		for (int i=0;i<n;i++) {
			if (vet[i] % 2 == 0) {
				cont++;
				System.out.print(vet[i] + "  ");				
			};			
		};
		System.out.println();
		System.out.println();
		
		System.out.println("QUANTIDADE DE PARES: "+cont);
		
		sc.close();
	}

}
