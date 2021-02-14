package fatorial;

import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		
		Scanner sc = new Scanner(System.in);
		
		int N, fatorial;
		
		System.out.print("Digite o valor de N: ");
		N = sc.nextInt();
		
		fatorial = 1;
		
		for (int i = N; i > 0; i--) {
			fatorial = fatorial * i;
		}
		
		System.out.println("FATORIAL = " + fatorial);
		
		sc.close();
	}

}
