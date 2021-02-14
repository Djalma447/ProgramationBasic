package teste_vetores;

import java.util.Locale;
import java.util.Scanner;

public class Main {

	public static void main(String[] args) {

		Locale.setDefault(Locale.US);
		Scanner sc = new Scanner(System.in);
		
		System.out.print("Quantos números você vai digitar? ");
		int N = sc.nextInt();
		
		double[] vet = new double[N];
		
		for (int i = 0; i < N; i++) {
			System.out.print("Digite um número: ");
			vet[i] = sc.nextDouble();
		}
		
		System.out.println();
		System.out.println("NÚMEROS DIGITADOS");
		for (int i = 0; i < N; i++) {
				System.out.println(String.format("%.1f", vet[i]));
		}
		
		sc.close();
	}

}
