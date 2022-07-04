import java.util.Locale;
import java.util.Scanner;

public class Operadora {

	public static void main(String[] args) {
		Locale.setDefault(Locale.US);
		Scanner sc = new Scanner(System.in);
		
		int qnt;
		double valorTotal;
		
		System.out.print("Digite a quantidade de minutos: ");
		qnt = sc.nextInt();
		
		if (qnt <= 100) {
			valorTotal = 50.00;			
		}else{
			valorTotal = ((qnt - 100) * 2.00) + 50.00;			
		};
		
		System.out.println("Valor a pagar: R$ "+String.format("%.2f", valorTotal));
		
		sc.close();
		
	}

}
