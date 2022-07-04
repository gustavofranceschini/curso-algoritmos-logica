import java.util.Locale;
import java.util.Scanner;

public class DiagonalNegativos {

	public static void main(String[] args) {
		Locale.setDefault(Locale.US);
		Scanner sc = new Scanner(System.in);
		
		int n;
		
		System.out.print("Qual a ordem da matriz? ");
		n = sc.nextInt();
		
		int mat[][] = new int[n][n];
		
		// Lendo a matriz
		for (int i=0;i<n;i++) {
			for (int j=0;j<n;j++) {
				System.out.print("Elemento ["+i+","+j+"]: ");
				mat[i][j] = sc.nextInt();				
			};			
		};
		
		// Imprimindo a diagonal principal
		System.out.println("DIAGONAL PRINCIPAL:");
		for (int i=0;i<n;i++) {
			for (int j=0;j<n;j++) {
				if (j == i) {
					System.out.print(mat[i][j] + "  ");
				};				
			};			
		};
		System.out.println();
		
		// Quantidade de negativos
		int cont =0;
		for (int i=0;i<n;i++) {
			for (int j=0;j<n;j++) {
				if (mat[i][j] < 0) {
					cont++;					
				};				
			};			
		};
		System.out.println("QUANTIDADE DE NEGATIVOS = "+cont);
		
		sc.close();
	}

}
