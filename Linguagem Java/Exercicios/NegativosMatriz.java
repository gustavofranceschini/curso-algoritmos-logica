import java.util.Locale;
import java.util.Scanner;

public class NegativosMatriz {

	public static void main(String[] args) {
		Locale.setDefault(Locale.US);
		Scanner sc = new Scanner(System.in);
		
		int m,n;
		
		System.out.print("Qual a quantidade de linhas da matriz? ");
		m = sc.nextInt();
		System.out.print("Qual a quantidade de colunas da matriz? ");
		n = sc.nextInt();
		
		int mat[][] = new int[m][n];
		
		//Lendo a matriz
		for (int i=0;i<m;i++) {
			for (int j=0;j<n;j++) {
				System.out.print("Elemento ["+i+","+j+"]: ");
				mat[i][j] = sc.nextInt();				
			};			
		};
		
		// Numeros negativos
		System.out.println("VALORES NEGATIVOS:");
		for (int i=0;i<m;i++) {
			for (int j=0;j<n;j++) {
				if (mat[i][j] < 0) {
					System.out.println(mat[i][j]);					
				};				
			};			
		};
		
		sc.close();

	}

}
