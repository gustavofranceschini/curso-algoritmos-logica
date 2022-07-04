import java.util.Locale;
import java.util.Scanner;

public class Alturas {

	public static void main(String[] args) {
		Locale.setDefault(Locale.US);
		Scanner sc = new Scanner(System.in);
		
		int n,cont;
		double soma,media,porcentagem;
		
		System.out.print("Quantas pessoas serao digitadas? ");
        n = sc.nextInt();
        
        int idade[] = new int[n];
        double altura[] = new double[n];
        String nome[] = new String[n];
        
        // Lendo o vetor
        for (int i=0;i<n;i++) {
        	System.out.println("Dados da "+(i+1)+"a pessoa:");
        	System.out.print("Nome: ");
        	sc.nextLine();
        	nome[i] = sc.nextLine();
        	System.out.print("Idade: ");
        	idade[i] = sc.nextInt();
        	System.out.print("Altura: ");
        	altura[i] = sc.nextDouble();        	
        };
        
        System.out.println();
        // Altura media
        soma = 0;
        for (int i=0;i<n;i++) {
        	soma = soma + altura[i];        	
        };
        media = soma / n;
        System.out.println("Altura media: "+String.format("%.2f", media));
        
        // Pessoas com menos de 16 anos
        cont = 0;
        for (int i=0;i<n;i++) {
        	if (idade[i] < 16) {
        		cont++;       		
        	};        	
        };
        
        porcentagem = (cont * 100) / n;
        System.out.println("Pessoas com menos de 16 anos: "+String.format("%.1f", porcentagem)+"%");
        
        for (int i=0;i<n;i++) {
        	if (idade[i] < 16) {
        		System.out.println(nome[i]);      		
        	};        	
        };
        
        sc.close();
	}

}
