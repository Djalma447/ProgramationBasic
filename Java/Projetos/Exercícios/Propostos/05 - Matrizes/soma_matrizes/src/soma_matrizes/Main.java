package soma_matrizes;

import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		
		Scanner sc = new Scanner(System.in);
		
		int M, N;
		
		System.out.print("Quantas linhas vai ter cada matriz? ");
		M = sc.nextInt();
		System.out.print("Quantas colunas vai ter cada matriz? ");
		N = sc.nextInt();
		
		int[][] A = new int[M][N];
		int[][] B = new int[M][N];
		
		System.out.println("Digite os valores da matriz A:");
		for (int i = 0; i < M; i++) {
			for (int j = 0; j < N; j++) {
				System.out.print("Elemento [" + i + "," + j + "]: ");
				A[i][j] = sc.nextInt();
			}
		}
		
		System.out.println("Digite os valores da matriz B:");
		for (int i = 0; i < M; i++) {
			for (int j = 0; j < N; j++) {
				System.out.print("Elemento [" + i + "," + j + "]: ");
				B[i][j] = sc.nextInt();
			}
		}
		
		int[][] C = new int[M][N];
		for (int i = 0; i < M; i++) {
			for (int j = 0; j < N; j++) {
				C[i][j] = A[i][j] + B[i][j];
			}
		}
		
		System.out.println("MATRIZ SOMA:");
		for (int i = 0; i < M; i++) {
			for (int j = 0; j < N; j++) {
				System.out.print(C[i][j] + " ");
			}
			System.out.println();
		}
		
		sc.close();
	}

}
