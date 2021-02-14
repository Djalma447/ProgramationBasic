package troco_verificado;

import java.util.Locale;
import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		
		Locale.setDefault(Locale.US);
		Scanner sc = new Scanner(System.in);
		
		double precoUnitario, dinheiro, total, troco, resto;
		int quantidade;
		
		System.out.print("Preço unitário do produto: ");
		precoUnitario = sc.nextDouble();
		System.out.print("Quantidade comprada: ");
		quantidade = sc.nextInt();
		System.out.print("Dinheiro recebido: ");
		dinheiro = sc.nextDouble();
		
		total = precoUnitario * quantidade;
		
		if (dinheiro < total) {
			resto = total - dinheiro;
			System.out.print("DINHEIRO INSUFICIENTE. FALTAM " + String.format("%.2f", resto) + " REAIS");
		}
		else {
			troco = dinheiro - total;
			System.out.println("TROCO = " + String.format("%.2f", troco));
		}
		
		sc.close();
	}

}
