import java.util.Locale;
import java.util.Scanner;

public class Lanchonete {

	public static void main(String[] args) {
		Locale.setDefault(Locale.US);
		Scanner sc = new Scanner(System.in);
		
		int qnt,codigo;
		double valorTotal;
		
		System.out.print("Codigo do produto comprado: ");
		codigo = sc.nextInt();
		System.out.print("Quantidade comprada: ");
		qnt = sc.nextInt();
		
		valorTotal = 0;
		switch (codigo){
			
		case 1:
			valorTotal = 5.00 * qnt;
			break;
		case 2:
			valorTotal = 3.50 * qnt;
			break;
		case 3:
			valorTotal = 4.80 * qnt;
			break;
		case 4:
			valorTotal = 8.90 * qnt;
			break;
		case 5:
			valorTotal = 7.32 * qnt;
			break;				
		default:
			System.out.println("Codigo invalido");
		};
		
		System.out.println("Valor a pagar: R$ "+valorTotal);
		sc.close();

	}

}
