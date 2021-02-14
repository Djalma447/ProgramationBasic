package experiencias;

import java.util.Locale;
import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		
		Locale.setDefault(Locale.US);
		Scanner sc = new Scanner(System.in);
		
		int N, cobaias, quantidade, coelhos, ratos, sapos;
		double percentualCoelhos, percentualRatos, percentualSapos;
		char tipo;
		
		System.out.print("Quantos casos de teste serao digitados? ");
		N = sc.nextInt();
		
		cobaias = 0;
		coelhos = 0;
		ratos = 0;
		sapos = 0;
		
		for (int i = 1; i <= N; i++) {
			System.out.print("Quantidade de cobaias: ");
			quantidade = sc.nextInt();
			System.out.print("Tipo de cobaia: ");
			tipo = sc.next().charAt(0);
			if (tipo == 'C') {
				coelhos = coelhos + quantidade;
			}
			else if (tipo == 'R') {
				ratos = ratos + quantidade;
			}
			else {
				sapos = sapos + quantidade;
			}
			cobaias = cobaias + quantidade;
		}
		
		percentualCoelhos = coelhos * 100.0 / cobaias;
		percentualRatos = ratos * 100.0 / cobaias;
		percentualSapos = sapos * 100.0 / cobaias;
		
		System.out.println("\nRELATORIO FINAL:");
		System.out.println("Total: " + cobaias + " cobaias");
		System.out.println("Total de coelhos: " + coelhos);
		System.out.println("Total de ratos: " + ratos);
		System.out.println("Total de sapos: " + sapos);
		System.out.println("Percentual de coelhos: " + String.format("%.2f", percentualCoelhos));
		System.out.println("Percentual de ratos: " + String.format("%.2f", percentualRatos));
		System.out.println("Percentual de sapos: " + String.format("%.2f", percentualSapos));
		
		sc.close();
	}

}
