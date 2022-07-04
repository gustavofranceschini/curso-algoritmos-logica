import java.util.Locale;
import java.util.Scanner;

public class Temperatura {

	public static void main(String[] args) {
		Locale.setDefault(Locale.US);
		Scanner sc = new Scanner(System.in);
		
        double c,f;
        char temperatura;
        
        System.out.print("Você vai digitar a temperatura em qual escala (C/F)? ");
		temperatura = sc.next().charAt(0);		
		while (temperatura != 'F' && temperatura != 'C') {
			System.out.println("Escala incorreta..");
			System.out.print("Digite C ou F: ");
			temperatura = sc.next().charAt(0);			
		};
		
		if (temperatura == 'C') {
			System.out.print("Digite a temperatura em Celsius: ");
			c = sc.nextDouble();
			
			f = (c*9/5)+32;
			System.out.println("Temperatura equivalente em Fahrenheit: "+String.format("%.2f", f));
			
		}else {
			System.out.print("Digite a temperatura em Fahrenheit: ");
			f = sc.nextDouble();
			
			c= (f-32) * 5/9;
			System.out.println("Temperatura equivalente em Celsius: "+String.format("%.2f", c));			
		};
		
		sc.close();
	}

}
