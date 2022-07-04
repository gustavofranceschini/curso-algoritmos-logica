import java.util.Locale;
import java.util.Scanner;

public class MaisVelho {

	public static void main(String[] args) {
		Locale.setDefault(Locale.US);
		Scanner sc = new Scanner(System.in);
		
		int n,posMaior,maisVelho;
		
		System.out.print("Quantas pessoas voce vai digitar? ");
		n = sc.nextInt();
		
		int idade[] = new int[n];
		String nome[] = new String[n];
		
		// Lendo o vetor
		for (int i=0;i<n;i++) {
			System.out.println("Dados da "+(i+1)+"a pessoa:");
			System.out.print("Nome: ");
			sc.nextLine();
			nome[i] = sc.nextLine();
			System.out.print("Idade: ");
			idade[i] = sc.nextInt();			
		};
		
		//Encontrando mais velho
		posMaior = 0;
		maisVelho = idade[0];
		for (int i=1;i<n;i++) {
			if (idade[i] > maisVelho) {
				maisVelho = idade[i];
				posMaior = i;				
			};			
		};
		
		System.out.println("PESSOA MAIS VELHA: "+nome[posMaior]);		
		
		
		sc.close();

	}

}
