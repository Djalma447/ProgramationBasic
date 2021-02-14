
package temperatura;

import java.util.Locale;
import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		
		Locale.setDefault(Locale.US);
		Scanner sc = new Scanner(System.in);
		
		double C, F;
		char temperatura;
		
		System.out.print("Voce vai digitar a temperatura em qual escala (C/F)? ");
		temperatura = sc.next().charAt(0);
		
		if (temperatura == 'F') {
			System.out.print("Digite a temperatura em Fahrenheit: ");
			F = sc.nextDouble();
			C = 5.0 / 9.0 * (F - 32.0);
			System.out.println("Temperatura equivalente em Celsius: " + String.format("%.2f", C));
		}
		else {
			System.out.print("Digite a temperatura em Celsius: ");
			C = sc.nextDouble();
			F = C / 5.0 * 9.0 + 32.0;
			System.out.println("Temperatura equivalente em Fahrenheit: " + String.format("%.2f", F));
		}
		
		sc.close();
	}

}
