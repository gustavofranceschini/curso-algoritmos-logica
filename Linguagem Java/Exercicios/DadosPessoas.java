import java.util.Locale;
import java.util.Scanner;

public class DadosPessoas {

	public static void main(String[] args) {
		Locale.setDefault(Locale.US);
		Scanner sc = new Scanner(System.in);
		
		int n,contM,contF;
		double maiorAltura,menorAltura,soma,media;
		
		System.out.print("Quantas pessoas serao digitadas? ");
		n = sc.nextInt();
		
		double altura[] = new double[n];
		char genero[] = new char[n];
		
		// Lendo os vetores
		for (int i=0;i<n;i++) {
			System.out.print("Altura da "+(i+1)+"a pessoa: ");
			altura[i] = sc.nextDouble();
			System.out.print("Genero da "+(i+1)+"a pessoa: ");
			genero[i] = sc.next().charAt(0);
			while (genero[i] != 'M' && genero[i] != 'F') {
				System.out.println();
				System.out.println("Genero invalido..");
				System.out.print("Digite 'M' ou 'F': ");
				genero[i] = sc.next().charAt(0);				
			};			
		};
		
		// Maior altura
		maiorAltura = altura[0];
		for (int i=1;i<n;i++) {
			if (altura[i] > maiorAltura) {
				maiorAltura = altura[i];				
			};			
		};
		System.out.println("Maior altura = "+String.format("%.2f", maiorAltura));
		
		// Menor altura
		menorAltura = altura[0];
		for (int i=1;i<n;i++) {
			if(altura[i] < menorAltura) {
				menorAltura = altura[i];				
			};			
		};
		System.out.println("Menor altura = "+String.format("%.2f", menorAltura));
		
		// Media das alturas das mulheres
		contF = 0;
		soma = 0;
		for (int i=0;i<n;i++) {
			if (genero[i] == 'F') {
				contF++;
				soma = soma + altura[i];				
			};			
		};
		media = soma / contF;
		System.out.println("Media das alturas das mulheres = "+String.format("%.2f", media));
		
		//Numero de homens
		contM = 0;
		contM = n - contF;
		System.out.println("Numero de homens = "+contM);
		
		
		sc.close();

	}

}
