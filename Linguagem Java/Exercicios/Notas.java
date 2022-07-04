import java.util.Locale;
import java.util.Scanner;

public class Notas {

	public static void main(String[] args) {
		Locale.setDefault(Locale.US);
		Scanner sc = new Scanner(System.in);
		
		double n1,n2,notaFinal;
		
		System.out.print("Digite a primeira nota: ");
		n1 = sc.nextDouble();
		System.out.print("Digite a segunda nota: ");
		n2 = sc.nextDouble();
		
		notaFinal = n1+n2;
		
		if (notaFinal >= 60.00) {
			System.out.println("APROVADO");
			
		}else {
			System.out.println("REPROVADO");			
		};
		
		sc.close();

	}

}
