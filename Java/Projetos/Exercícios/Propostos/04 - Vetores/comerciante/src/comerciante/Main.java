package comerciante;

import java.util.Locale;
import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		
		Locale.setDefault(Locale.US);
		Scanner sc = new Scanner(System.in);
		
		int N, abaixo, entre, acima;
		double totalCompra, totalVenda, totalLucro, percentual;
		
		System.out.print("Serao digitados dados de quantos produtos? ");
		N = sc.nextInt();
		
		String[] nomes = new String[N];
		double[] compras = new double[N];
		double[] vendas = new double[N];
		
		for (int i = 0; i < N; i++) {
			System.out.println("Produto " + (i+1) + ":");
			System.out.print("Nome: ");
			sc.nextLine();
			nomes[i] = sc.nextLine();
			System.out.print("Preco de compra: ");
			compras[i] = sc.nextDouble();
			System.out.print("Preco de venda: ");
			vendas[i] = sc.nextDouble();
		}
		
		double[] lucros = new double[N];
		for (int i = 0; i < N; i++) {
			lucros[i] = vendas[i] - compras[i];
		}
		
		abaixo = 0;
		entre = 0;
		acima = 0;
		for (int i = 0; i < N; i++) {
			percentual = lucros[i] * 100 / compras[i];
			if (percentual < 10) {
				abaixo++;
			}
			else if (percentual <= 20) {
				entre++;
			}
			else {
				acima++;
			}
		}
		
		totalCompra = 0;
		totalVenda = 0;
		totalLucro = 0;
		for (int i = 0; i < N; i++) {
			totalCompra = totalCompra + compras[i];
			totalVenda = totalVenda + vendas[i];
			totalLucro = totalLucro + vendas[i] - compras[i];
		}
		
		System.out.println("\nRELATORIO:");
		System.out.println("Lucro abaixo de 10%: " + abaixo);
		System.out.println("Lucro entre 10% e 20%: " + entre);
		System.out.println("Lucro acima de 20%: " + acima);
		System.out.println("Valor total de compra: " + String.format("%.2f", totalCompra));
		System.out.println("Valor total de venda: " + String.format("%.2f", totalVenda));
		System.out.println("Lucro total: " + String.format("%.2f", totalLucro));
		
		sc.close();
	}

}
