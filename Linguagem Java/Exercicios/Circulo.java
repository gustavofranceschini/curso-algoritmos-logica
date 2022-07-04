import java.util.Locale;
import java.util.Scanner;

public class Circulo {

	public static void main(String[] args) {
		
		Locale.setDefault(Locale.US);
		Scanner sc = new Scanner(System.in);
		
		double raio,area;
		double pi = 3.14159;
		
		System.out.print("Digite o valor do raio: ");
		raio = sc.nextDouble();
		
		area = pi * (Math.pow(raio, 2));
		System.out.println("AREA = "+String.format("%.3f", area));
		
		sc.close();
		
	}

}
