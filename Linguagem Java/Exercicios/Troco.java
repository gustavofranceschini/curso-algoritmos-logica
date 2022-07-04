import java.util.Locale;
import java.util.Scanner;

public class Troco {

	public static void main(String[] args) {
		Locale.setDefault(Locale.US);
		Scanner sc = new Scanner(System.in);
		
		int qnt;
		double precoUn,precoTotal,troco,dinheiroRecebido;
		
		System.out.print("Preço unitário do produto: ");
		precoUn = sc.nextDouble();
		System.out.print("Quantidade comprada: ");
		qnt = sc.nextInt();
		System.out.print("Dinheiro recebido: ");
		dinheiroRecebido = sc.nextDouble();
		
		precoTotal = precoUn * qnt;
		troco = dinheiroRecebido - precoTotal;
		System.out.print("TROCO = "+String.format("%.2f", troco));
		
		sc.close();	

	}

}
