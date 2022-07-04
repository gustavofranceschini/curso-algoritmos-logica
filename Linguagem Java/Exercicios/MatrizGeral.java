import java.util.Locale;
import java.util.Scanner;

public class MatrizGeral {

	public static void main(String[] args) {
		Locale.setDefault(Locale.US);
		Scanner sc = new Scanner(System.in);

		int n, linha, coluna;
		double soma;

		System.out.print("Qual a ordem da matriz? ");
		n = sc.nextInt();

		double mat[][] = new double[n][n];

		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				System.out.print("Elemento [" + i + "," + j + "]: ");
				mat[i][j] = sc.nextDouble();
			};
		};
		System.out.println();

		// Somando os positivos
		soma = 0;
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				if (mat[i][j] > 0) {
					soma = soma + mat[i][j];
				};
			};
		};
		System.out.println("SOMA DOS POSITIVOS = "+String.format("%.1f", soma));
		System.out.println();

		// Imprimindo uma linha
		System.out.print("Escolha uma linha: ");
		linha = sc.nextInt();
		System.out.print("LINHA ESCOLHIDA: ");
		for (int j = 0; j < n; j++) {
			System.out.print(mat[linha][j] + "  ");
		};
		System.out.println();
		System.out.println();

		// Imprimindo uma coluna
		System.out.print("Escolha uma coluna: ");
		coluna = sc.nextInt();
		System.out.print("LINHA ESCOLHIDA: ");
		for (int i = 0; i < n; i++) {
			System.out.print(mat[i][coluna] + "  ");
		};
		System.out.println();
		System.out.println();
		
		//Imprimindo a diagonal principal
		System.out.print("DIAGONAL PRINCIPAL: ");
		for (int i=0;i<n;i++) {
			for (int j=0;j<n;j++) {
				if (j == i) {
					System.out.print(mat[i][j] + "  ");					
				};				
			};			
		};
		System.out.println();
		System.out.println();
		
		// Alterando os numeros negativos da matriz
		for (int i=0;i<n;i++) {
			for (int j=0;j<n;j++) {
				if (mat[i][j] < 0) {
					mat[i][j] = Math.pow(mat[i][j], 2);					
				};				
			};			
		};
		
		// Imprimindo a matriz alterada
		System.out.println("MATRIZ ALTERADA:");
		for (int i=0;i<n;i++) {
			for(int j=0;j<n;j++) {
				System.out.print(mat[i][j]+"  ");				
			};
			System.out.println();
		};

		sc.close();

	}

}
