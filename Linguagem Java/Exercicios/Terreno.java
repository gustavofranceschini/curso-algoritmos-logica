import java.util.Locale;
import java.util.Scanner;

public class Terreno {

	public static void main(String[] args) {
		Locale.setDefault(Locale.US);
		Scanner sc = new Scanner(System.in);
		
		double larg,comp,precoMetro,precoTotal,area;
		
		System.out.print("Digite a largura do terreno: ");
		larg = sc.nextDouble();
		System.out.print("Digite o comprimento do terreno: ");
		comp = sc.nextDouble();
		System.out.print("Digite o valor do metro quadrado: ");
		precoMetro = sc.nextDouble();
		
		area = larg*comp;
		precoTotal = area * precoMetro;
		
		System.out.println("Area do terreno: "+String.format("%.2f", area));
		System.out.println("Preco do terreno: "+String.format("%.2f", precoTotal));
		
		sc.close();

	}

}
