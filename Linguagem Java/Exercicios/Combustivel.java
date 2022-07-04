import java.util.Locale;
import java.util.Scanner;

public class Combustivel {

	public static void main(String[] args) {
		Locale.setDefault(Locale.US);
		Scanner sc = new Scanner(System.in);
		
		int codigo,alcool,gasolina,diesel;
		
		alcool = 0;
		gasolina = 0;
		diesel = 0;
		System.out.print("Informe um codigo (1,2,3) ou 4 para parar: ");
		codigo = sc.nextInt();
		
		while (codigo != 4) {
			switch (codigo) {
			case 1:
				alcool++;
				break;
			case 2:
				gasolina++;
				break;
			case 3:
				diesel++;
				break;
			default:
				System.out.print("Código invalido.. ");			    
			};
			System.out.print("Informe um codigo (1,2,3) ou 4 para parar: ");
			codigo = sc.nextInt();
			
		};
		System.out.println();
		
		System.out.println("Muito obrigado");
		System.out.println("Alcool: "+alcool );
		System.out.println("Gasolina: "+gasolina);
		System.out.println("Diesel: "+diesel);
		
		sc.close();
	}

}
