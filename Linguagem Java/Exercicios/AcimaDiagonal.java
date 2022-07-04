import java.util.Locale;
import java.util.Scanner;

public class AcimaDiagonal {

	public static void main(String[] args) {
		Locale.setDefault(Locale.US);
		Scanner sc = new Scanner(System.in);
		
		int n,soma;
		
		System.out.print("Qual ordem da matriz? ");
		n = sc.nextInt();
		
		int mat[][] = new int[n][n];
		
		// Lendo a matriz
		for (int i=0;i<n;i++) {
			for (int j=0;j<n;j++) {
				System.out.print("Elemento ["+i+","+j+"]: ");
				mat[i][j] = sc.nextInt();				
			};			
		};
		
		// Soma dos elementos acima da diagonal principal
		soma = 0;
		for (int i=0;i<n;i++) {
			for (int j=0;j<n;j++) {
				if (j > i) {
					soma = soma + mat[i][j];					
				};
			};			
		};
		System.out.println("SOMA DOS ELEMENTOS ACIMA DA DIAGONAL PRINCIPAL: "+soma);
		
		sc.close();

	}

}
