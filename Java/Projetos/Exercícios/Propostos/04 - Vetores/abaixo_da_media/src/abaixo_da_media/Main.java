package abaixo_da_media;

import java.util.Locale;
import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		
		Locale.setDefault(Locale.US);
		Scanner sc = new Scanner(System.in);
		
		int N;
		double soma, media;
		
		System.out.print("Quantos elementos vai ter o vetor? ");
		N = sc.nextInt();
		
		double[] vet = new double[N];
		
		for (int i = 0; i < N; i++) {
			System.out.print("Digite um numero: ");
			vet[i] = sc.nextDouble();
		}
		
		soma = 0;
		for (int i = 0; i < N; i++) {
			soma = soma + vet[i];
		}
		
		media = soma / N;
		
		System.out.println("\nMEDIA DO VETOR = " + String.format("%.3f", media));
		
		System.out.println("ELEMENTOS ABAIXO DA MEDIA:");
		for (int i = 0; i < N; i++) {
			if (vet[i] < media) {
				System.out.println(String.format("%.1f", vet[i]));
			}
		}
		
		sc.close();
	}

}
