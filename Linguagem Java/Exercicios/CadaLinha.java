import java.util.Locale;
import java.util.Scanner;

public class CadaLinha {

	public static void main(String[] args) {
		Locale.setDefault(Locale.US);
		Scanner sc = new Scanner(System.in);
		
		int n,maior;
		
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
		
		//Maior elemento de cada linha
		System.out.println("MAIOR ELEMENTO DE CADA LINHA:");
		for (int i=0;i<n;i++) {
			maior = 0;
			for (int j=0;j<n;j++) {
				if (mat[i][j] > maior)
				maior = mat[i][j];
			};
			System.out.println(maior);			
		};
		
		sc.close();

	}

}
