import java.util.Locale;
import java.util.Scanner;

public class Tabuada {

	public static void main(String[] args) {
		Locale.setDefault(Locale.US);
		Scanner sc = new Scanner(System.in);
		
		int n,soma;
		
		soma = 0;
		System.out.print("Deseja a tabuada para qual valor? ");
        n = sc.nextInt();
        
        for (int i=1;i<=10;i++) {
        	soma = n*i;
        	System.out.println(n+" x "+i+" = "+soma);
        };
        
        sc.close();
	}

}
