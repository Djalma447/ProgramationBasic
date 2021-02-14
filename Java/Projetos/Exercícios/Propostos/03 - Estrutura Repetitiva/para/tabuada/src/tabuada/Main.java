package tabuada;

import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		
		Scanner sc = new Scanner(System.in);
		
		int N, produto;
		
		System.out.print("Deseja a tabuada para qual valor? ");
		N = sc.nextInt();
		
		for (int i = 1; i <= 10; i++) {
			produto = i * N;
			System.out.println(N + " x " + i + " = " + produto);
		}
		
		sc.close();
	}

}
