package numeros_pares;

import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		
		Scanner sc = new Scanner(System.in);
		
		int N, pares;
		
		System.out.print("Quantos numeros voce vai digitar? ");
		N = sc.nextInt();
		
		int[] vet = new int[N];
		
		for (int i = 0; i < N; i++) {
			System.out.print("Digite um numero: ");
			vet[i] = sc.nextInt();
		}
		
		pares = 0;
		System.out.println("\nNUMEROS PARES:");
		for (int i = 0; i < N; i++) {
			if (vet[i] % 2 == 0) {
				System.out.print(vet[i] + " ");
				pares++;
			}
		}
		
		System.out.println("\n\nQUANTIDADE DE PARES = " + pares);
		
		sc.close();
	}

}
