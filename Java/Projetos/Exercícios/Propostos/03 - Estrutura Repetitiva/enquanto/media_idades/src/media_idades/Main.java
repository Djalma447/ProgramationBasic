package media_idades;

import java.util.Locale;
import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		
		Locale.setDefault(Locale.US);
		Scanner sc = new Scanner(System.in);
		
		int x, soma, quantidade;
		double media;
		
		System.out.println("Digite as idades:");
		x = sc.nextInt();
		
		soma = 0;
		quantidade = 0;
		
		while (x > 0) {
			soma = soma + x;
			quantidade++;
			x = sc.nextInt();
		}
		
		if (quantidade > 0) {
			media = (double)soma / quantidade;
			System.out.println("MEDIA = " + String.format("%.2f", media));
		}
		else {
			System.out.println("IMPOSSIVEL CALCULAR");
		}
		
		sc.close();
	}

}
