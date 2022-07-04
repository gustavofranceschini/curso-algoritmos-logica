import java.util.Locale;
import java.util.Scanner;

public class Multiplos {

	public static void main(String[] args) {
		Locale.setDefault(Locale.US);
		Scanner sc = new Scanner(System.in);

		int n1, n2;

		System.out.println("Digite dois numeros inteiros:");
		n1 = sc.nextInt();
		n2 = sc.nextInt();
		
		if (n1%n2==0 || n2%n1==0) {
			System.out.println("Sao multiplos");			
		}else {
			System.out.println("Nao sao multiplos");			
		};
		
		sc.close();
	}

}
