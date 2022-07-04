import java.util.Locale;
import java.util.Scanner;

public class MediaIdades {

	public static void main(String[] args) {
		Locale.setDefault(Locale.US);
		Scanner sc = new Scanner(System.in);

		int idade, cont,soma;
		double media;

		soma = 0;
		cont = 0;
		System.out.println("Digite as idades:");
		idade = sc.nextInt();

		if (idade <= 0) {
			System.out.println("IMPOSSIVEL CALCULAR");
		} else {
			while (idade > 0) {
				soma = soma + idade;
				cont++;
				idade = sc.nextInt();
			};
			media = (double)soma / cont;
			System.out.println("MEDIA = "+String.format("%.2f", media));
		};
		
		sc.close();

	}

}
