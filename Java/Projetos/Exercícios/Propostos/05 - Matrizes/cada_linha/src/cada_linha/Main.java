package cada_linha;

import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		
		Scanner sc = new Scanner(System.in);
		
		int N;
		
		System.out.print("Qual a ordem da matriz? ");
		N = sc.nextInt();
		
		int[][] mat = new int[N][N];
		
		for (int i = 0; i < N; i++) {
			for (int j = 0; j < N; j++) {
				System.out.print("Elemento [" + i + "," + j + "]: ");
				mat[i][j] = sc.nextInt();
			}
		}
		
		int[] maiores = new int[N];
		for (int i = 0; i < N ; i++) {
			maiores[i] = mat[i][0];
			for (int j = 0; j < N; j++) {
				if (mat[i][j] > maiores[i]) {
					maiores[i] = mat[i][j];
				}
			}
		}
		
		System.out.println("MAIOR ELEMENTO DE CADA LINHA:");
		for (int i = 0; i < N; i++) {
			System.out.println(maiores[i]);
		}
		
		sc.close();
	}

}
