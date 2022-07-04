import java.util.Locale;
import java.util.Scanner;

public class Medidas {

	public static void main(String[] args) {
		Locale.setDefault(Locale.US);
		Scanner sc = new Scanner(System.in);
		
		double a,b,c,areaQuadrado,areaTriangulo,areaTrapezio;
		
		System.out.print("Digite a medida A: ");
		a = sc.nextDouble();
		System.out.print("Digite a medida B: ");
		b = sc.nextDouble();
		System.out.print("Digite a medida C: ");
		c = sc.nextDouble();
		
		areaQuadrado = a*a;
		areaTriangulo = (a*b) / 2;
		areaTrapezio = ((a+b)*c)/2;
		
		System.out.println("Area do quadrado: "+String.format("%.4f", areaQuadrado));
		System.out.println("Area do Triangulo: "+String.format("%.4f", areaTriangulo));
		System.out.println("Area do Trapezio: "+String.format("%.4f", areaTrapezio));

		sc.close();
	}

}
