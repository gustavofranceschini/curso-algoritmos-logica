import java.util.Locale;
import java.util.Scanner;

public class DentroFora {

	public static void main(String[] args) {
		Locale.setDefault(Locale.US);
		Scanner sc = new Scanner(System.in);
		
		int n,x,contDentro,contFora;
		
		contDentro = 0;
		contFora = 0;
		System.out.print("Quantos numeros voce vai digitar? ");
        n = sc.nextInt();
        
        for (int i=1;i<=n;i++) {
        	System.out.print("Digite um numero: ");
        	x = sc.nextInt();
        	
        	if (x >= 10 && x <= 20) {
        		contDentro++;        		
        	}else {
        		contFora++;        		
        	};
        };
        
        System.out.println(contDentro+" DENTRO");
        System.out.println(contFora+" FORA");
        
        sc.close();
	}

}
