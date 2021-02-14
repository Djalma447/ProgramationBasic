package mais_velho;

import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		
		Scanner sc = new Scanner(System.in);
		
		int N, maisVelho, posMaisVelho;
		
		System.out.print("Quantas pessoas voce vai digitar? ");
		N = sc.nextInt();
		
		String[] nomes = new String[N];
		int[] idades = new int[N];
		
		for (int i = 0; i < N; i++) {
			System.out.println("Dados da " + (i+1) + "a pessoa:");
			System.out.print("Nome: ");
			sc.nextLine();
			nomes[i] = sc.nextLine();
			System.out.print("Idade: ");
			idades[i] = sc.nextInt();
		}
		
		maisVelho = idades[0];
		posMaisVelho = 0;
		for (int i = 1; i < N; i++) {
			if (idades[i] > maisVelho) {
				maisVelho = idades[i];
				posMaisVelho = i;
			}
		}
		
		System.out.println("PESSOA MAIS VELHA: " + nomes[posMaisVelho]);
		
		sc.close();
	}

}
