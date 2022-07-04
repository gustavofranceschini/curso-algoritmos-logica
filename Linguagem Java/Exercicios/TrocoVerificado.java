import java.util.Locale;
import java.util.Scanner;

public class TrocoVerificado {

	public static void main(String[] args) {
		Locale.setDefault(Locale.US);
		Scanner sc = new Scanner(System.in);
		
		double precoUn,dinheiroRecebido,precoTotal,troco;
		int qnt;
		
		System.out.print("Preco unitario do produto: ");
		precoUn = sc.nextDouble();
		System.out.print("Quantidade comprada: ");
		qnt = sc.nextInt();
		System.out.print("Dinheiro recebido: ");
		dinheiroRecebido = sc.nextDouble();
		
		precoTotal = qnt * precoUn;
		
		if (dinheiroRecebido > precoTotal) {
			troco = dinheiroRecebido - precoTotal;
			System.out.println("TROCO = "+String.format("%.2f", troco));
		}else {
			troco = precoTotal - dinheiroRecebido;
			System.out.println("DINHEIRO INSUFICIENTE, FALTAM "+String.format("%.2f", troco));			
		};
		
		sc.close();	

	}

}
