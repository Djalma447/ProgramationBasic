package soma_linhas;

import java.util.Locale;
import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		
		Locale.setDefault(Locale.US);
		Scanner sc = new Scanner(System.in);
		
		int M, N;
		
		System.out.print("Qual a quantidade de linhas da matriz? ");
		M = sc.nextInt();
		System.out.print("Qual a quantidade de colunas da matriz? ");
		N = sc.nextInt();
		
		double[][] mat = new double[M][N];
		
		for (int i = 0; i < M; i++) {
			System.out.println("Digite os elementos da " + (i+1) + "a. linha:");
			for (int j = 0; j < N; j++) {
				mat[i][j] = sc.nextDouble();
			}
		}
		
		double[] vet = new double[M];
		for (int i = 0; i < M; i++) {
			vet[i] = 0;
			for (int j = 0; j < N; j++) {
				vet[i] = vet[i] + mat[i][j];
			}
		}
		
		System.out.println("VETOR GERADO:");
		for (int i = 0; i < M; i++) {
			System.out.println(vet[i]);
		}
		
		sc.close();
	}

}
