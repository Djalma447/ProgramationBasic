package media_pares;

import java.util.Locale;
import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		
		Locale.setDefault(Locale.US);
		Scanner sc = new Scanner(System.in);
		
		int N, soma, pares;
		double media;
		
		System.out.print("Quantos elementos vai ter o vetor? ");
		N = sc.nextInt();
		
		int[] vet = new int[N];
		
		for (int i = 0; i < N; i++) {
			System.out.print("Digite um numero: ");
			vet[i] = sc.nextInt();
		}
		
		pares = 0;
		soma = 0;
		for (int i = 0; i < N; i++) {
			if (vet[i] % 2 == 0) {
				soma = soma + vet[i];
				pares++;
			}
		}
		
		if (pares == 0) {
			System.out.println("NENHUM NUMERO PAR");
		}
		else {
			media = soma / pares;
			System.out.println("MEDIA DOS PARES = " + String.format("%.1f", media));
		}
		
		sc.close();
	}

}
