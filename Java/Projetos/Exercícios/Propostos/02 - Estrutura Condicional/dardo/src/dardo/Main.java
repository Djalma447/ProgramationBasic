package dardo;

import java.util.Locale;
import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		
		Locale.setDefault(Locale.US);
		Scanner sc = new Scanner(System.in);
		
		double a, b, c, maior;
		
		System.out.println("Digite as tres distancias:");
		a = sc.nextDouble();
		b = sc.nextDouble();
		c = sc.nextDouble();
		
		if (a > b && a > c) {
			maior = a;
		}
		else if (b > c) {
			maior = b;
		}
		else {
			maior = c;
		}
		
		System.out.println("MAIOR DISTANCIA = " + String.format("%.2f", maior));
		
		sc.close();
	}

}
