package dentro_fora;

import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		
		Scanner sc = new Scanner(System.in);
		
		int N, x, dentro, fora;
		
		System.out.print("Quantos numeros voce vai digitar? ");
		N = sc.nextInt();
		
		dentro = 0;
		fora = 0;
		
		for (int i = 1; i <= N; i++) {
			System.out.print("Digite um numero: ");
			x = sc.nextInt();
			if (x >= 10 && x <= 20) {
				dentro++;
			}
			else {
				fora++;
			}
		}
		
		System.out.println(dentro + " DENTRO");
		System.out.println(fora + " FORA");
		
		sc.close();
	}

}
