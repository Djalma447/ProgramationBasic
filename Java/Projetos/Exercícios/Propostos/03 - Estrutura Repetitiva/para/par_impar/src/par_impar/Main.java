package par_impar;

import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		
		Scanner sc = new Scanner(System.in);
		
		int N, x;
		
		System.out.print("Quantos numeros voce vai digitar? ");
		N = sc.nextInt();
		
		for (int i = 1; i <= N; i++) {
			System.out.print("Digite um numero: ");
			x = sc.nextInt();
			
			if (x == 0) {
				System.out.println("NULO");
			}
			else if (x % 2 == 0) {
				System.out.print("PAR ");
				if (x > 0) {
					System.out.println("POSITIVO");
				}
				else {
					System.out.println("NEGATIVO");
				}
			}
			else {
				System.out.print("IMPAR ");
				if (x > 0) {
					System.out.println("POSITIVO");
				}
				else {
					System.out.println("NEGATIVO");
				}
			}
		}
		
		sc.close();
	}

}
