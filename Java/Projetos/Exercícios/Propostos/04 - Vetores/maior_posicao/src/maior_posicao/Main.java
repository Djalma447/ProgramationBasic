package maior_posicao;

import java.util.Locale;
import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		
		Locale.setDefault(Locale.US);
		Scanner sc = new Scanner(System.in);
		
		int N, posicaoMaior;
		double maior;
		
		System.out.print("Quanto numeros voce vai digitar? ");
		N = sc.nextInt();
		
		double[] vet = new double[N];
		
		for (int i = 0; i < N; i++) {
			System.out.print("Digite um numero: ");
			vet[i] = sc.nextDouble();
		}
		
		maior = vet[0];
		posicaoMaior = 0;
		for (int i = 1; i < N; i++) {
			if (vet[i] > maior) {
				maior = vet[i];
				posicaoMaior = i;
			}
		}
		
		System.out.println("\nMAIOR VALOR = " + String.format("%.1f", maior));
		System.out.println("POSICAO DO MAIOR VALOR = " + posicaoMaior);
		
		sc.close();
	}

}
