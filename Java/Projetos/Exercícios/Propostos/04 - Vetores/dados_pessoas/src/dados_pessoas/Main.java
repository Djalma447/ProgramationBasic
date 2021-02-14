package dados_pessoas;

import java.util.Locale;
import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		
		Locale.setDefault(Locale.US);
		Scanner sc = new Scanner(System.in);
		
		int N, homens, mulheres;
		double maiorAltura, menorAltura, somaMulheres, mediaMulheres;
		
		System.out.print("Quantas pessoas serao digitadas? ");
		N = sc.nextInt();
		
		double[] alturas = new double[N];
		char[] generos = new char[N];
		
		for (int i = 0; i < N; i++) {
			System.out.print("Altura da " + (i+1) + "a pessoa: ");
			alturas[i] = sc.nextDouble();
			System.out.print("Genero da " + (i+1) + "a pessoa: ");
			generos[i] = sc.next().charAt(0);
		}
		
		menorAltura = alturas[0];
		maiorAltura = alturas[0];
		for (int i = 1; i < N; i++) {
			if (alturas[i] < menorAltura) {
				menorAltura = alturas[i];
			}
			if (alturas[i] > maiorAltura) {
				maiorAltura = alturas[i];
			}
		}
		
		System.out.println("Menor altura = " + String.format("%.2f", menorAltura));
		System.out.println("Maior altura = " + String.format("%.2f", maiorAltura));
		
		homens = 0;
		mulheres = 0;
		somaMulheres = 0;
		for (int i = 0; i < N; i++) {
			if (generos[i] == 'M') {
				homens++;
			}
			else {
				mulheres++;
				somaMulheres = somaMulheres + alturas[i];
			}
		}
		
		mediaMulheres = somaMulheres / mulheres;
		System.out.println("Media das alturas das mulheres = " + String.format("%.2f", mediaMulheres));
		System.out.println("Numero de homens = " + homens);
		
		sc.close();
	}

}
