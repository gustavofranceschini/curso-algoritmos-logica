import java.util.Locale;
import java.util.Scanner;

public class MediaPonderada {

	public static void main(String[] args) {
		Locale.setDefault(Locale.US);
		Scanner sc = new Scanner(System.in);
         
		int n;
		double n1,n2,n3,media;
		
		System.out.print("Quantos casos voce vai digitar? ");
	    n = sc.nextInt();
	    
	    for (int i=1;i<=n;i++) {
	    	System.out.println("Digite tres numeros: ");
	    	n1 = sc.nextDouble();
	    	n2 = sc.nextDouble();
	    	n3 = sc.nextDouble();
	    	
	    	media = (n1*2+n2*3+n3*5) / 10;
	    	System.out.println("MEDIA = "+String.format("%.1f", media));
	    };
	
	    sc.close();
	}

}
