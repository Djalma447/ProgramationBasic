package divisao;

import java.util.Locale;
import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		
		Locale.setDefault(Locale.US);
		Scanner sc = new Scanner(System.in);
		
		int N, numerador, denominador;
		double divisao;
		
		System.out.print("Quantos casos voce vai digitar? ");
		N = sc.nextInt();
		
		for (int i = 1; i <= N; i++) {
			System.out.print("Entre com o numerador: ");
			numerador = sc.nextInt();
			System.out.print("Entre com o denominador: ");
			denominador = sc.nextInt();
			
			if (denominador == 0) {
				System.out.println("DIVISAO IMPOSSIVEL");
			}
			else {
				divisao = (double)numerador / denominador;
				System.out.println("DIVISAO = " + String.format("%.2f", divisao));
			}
		}
		
		sc.close();
	}

}
