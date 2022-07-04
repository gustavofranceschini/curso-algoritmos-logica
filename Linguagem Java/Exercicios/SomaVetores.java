import java.util.Locale;
import java.util.Scanner;

public class SomaVetores {

	public static void main(String[] args) {
		Locale.setDefault(Locale.US);
		Scanner sc = new Scanner(System.in);

		int n;

		System.out.print("Quantos valores vai ter cada vetor? ");
		n = sc.nextInt();

		int vetA[] = new int[n];
		int vetB[] = new int[n];
		int vetResultante[] = new int[n];

		// Lendo o vetor A
		System.out.println("Digite os valores do vetor A:");
		for (int i = 0; i < n; i++) {
			vetA[i] = sc.nextInt();
		};

		// Lendo o vetor B
		System.out.println("Digite os valores do vetor B:");
		for (int i = 0; i < n; i++) {
			vetB[i] = sc.nextInt();
		};
		
		// Soma dos vetores		
		for (int i=0;i<n;i++) {
			vetResultante[i] = vetA[i] + vetB[i];			
		};
		
		// Imprimindo vetor resultante
		System.out.println("VETOR RESULTANTE:");
		for (int i=0;i<n;i++) {
			System.out.println(vetResultante[i]);			
		};
		
		sc.close();
		

	}

}
