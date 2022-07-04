import java.util.Locale;
import java.util.Scanner;

public class Negativos {

	public static void main(String[] args) {
		Locale.setDefault(Locale.US);
		Scanner sc = new Scanner(System.in);
		
		int n;
		
		System.out.print("Quantos numeros voce vai digitar: ");
        n = sc.nextInt();
        
        int vet[] = new int[n];
        
        // Lendo o vetor
        for (int i=0;i<n;i++) {
        	System.out.print("Digite um numero: ");
        	vet[i] = sc.nextInt();
        };
        
        // Mostrando os numeros negativos
        System.out.println("NUMEROS NEGATIVOS:");
        for (int i=0;i<n;i++) {
        	if (vet[i] < 0) {
        		System.out.println(vet[i]);        		
        	};        	
        };
        
        sc.close();
	}

}
