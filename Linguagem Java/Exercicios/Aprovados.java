import java.util.Locale;
import java.util.Scanner;

public class Aprovados {

	public static void main(String[] args) {
		Locale.setDefault(Locale.US);
		Scanner sc = new Scanner(System.in);
		
		int n;
		
		System.out.print("Quantos alunos serao digitados? ");
		n = sc.nextInt();
		
		String nome[] = new String[n];
		double n1[] = new double[n];
		double n2[] = new double[n];
		double soma[] = new double[n];
		double media[] = new double[n];
		
		// Lendo os vetores
		for (int i=0;i<n;i++) {
			System.out.println("Digite o nome, primeira e segunda nota do "+(i+1)+"o aluno:");
			sc.nextLine();
			nome[i] = sc.nextLine();
			n1[i] = sc.nextDouble();
			n2[i] = sc.nextDouble();			
		};
		
		// Soma e media de todos os alunos		
		for (int i=0;i<n;i++) {
			soma[i] = n1[i] + n2[i];
			media[i] = soma[i] / 2;			
		};
		
		// Imprimindo os alunos aprovados (Acima ou igual a 6.0)
		System.out.println("Alunos aprovados:");
		for (int i=0;i<n;i++) {
			if (media[i] >= 6.0) {
				System.out.println(nome[i]);				
			};			
		};
		
		sc.close();
		

	}

}
