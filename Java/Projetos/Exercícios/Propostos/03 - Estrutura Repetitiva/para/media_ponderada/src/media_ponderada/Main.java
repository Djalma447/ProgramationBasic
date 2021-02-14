package media_ponderada;

import java.util.Locale;
import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		
		Locale.setDefault(Locale.US);
		Scanner sc = new Scanner(System.in);

		int N;
		double a, b, c, media;
		
		System.out.print("Quantos casos voce vai digitar? ");
		N = sc.nextInt();
		
		for (int i = 1; i <= N; i++) {
			System.out.println("Digite tres numeros:");
			a = sc.nextDouble();
			b = sc.nextDouble();
			c = sc.nextDouble();
			
			media = (a * 2 + b * 3 + c * 5) / 10;
			
			System.out.println("MEDIA = " + String.format("%.1f", media));
		}

		sc.close();
	}

}
