package teste_while;

import java.util.Scanner;

public class Main {

	public static void main(String[] args) {

		Scanner sc = new Scanner(System.in);
		
		int x, soma;
		
		soma = 0;
		System.out.print("Digite o primeiro n�mero: ");
		x = sc.nextInt();
		
		while (x != 0) {
			soma = soma + x;
			System.out.print("Digite outro n�mero: ");
			x = sc.nextInt();
		}
		
		System.out.println("SOMA = " + soma);
		sc.close();
	}

}
