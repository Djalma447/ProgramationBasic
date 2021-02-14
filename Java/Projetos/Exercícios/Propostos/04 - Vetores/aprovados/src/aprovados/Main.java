package aprovados;

import java.util.Locale;
import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		
		Locale.setDefault(Locale.US);
		Scanner sc = new Scanner(System.in);
		
		int N;
		
		System.out.print("Quantos alunos serao digitados? ");
		N = sc.nextInt();
		
		String[] nomes = new String[N];
		double[] notas1 = new double[N];
		double[] notas2 = new double[N];
		double[] medias = new double[N];
		
		for (int i = 0; i < N; i++) {
			System.out.println("Digite nome, primeira e segunda nota do " + (i+1) + "o aluno:");
			sc.nextLine();
			nomes[i] = sc.nextLine();
			notas1[i] = sc.nextDouble();
			notas2[i] = sc.nextDouble();
		}
		
		for (int i = 0; i < N; i++) {
			medias[i] = (notas1[i] + notas2[i]) / 2;
		}
		
		System.out.println("Alunos aprovados:");
		for (int i = 0; i < N; i++) {
			if (medias[i] >= 6.0) {
				System.out.println(nomes[i]);
			}
		}
		
		sc.close();
	}

}
