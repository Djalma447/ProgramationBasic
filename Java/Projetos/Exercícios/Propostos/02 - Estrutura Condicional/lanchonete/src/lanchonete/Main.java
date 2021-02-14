package lanchonete;

import java.util.Locale;
import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		
		Locale.setDefault(Locale.US);
		Scanner sc = new Scanner(System.in);
		
		int codigo, quantidade;
		double valor;
		
		System.out.print("Codigo do produto comprado: ");
		codigo = sc.nextInt();
		System.out.print("Quantidade comprada: ");
		quantidade = sc.nextInt();
		
		if (codigo == 1) {
			valor = quantidade * 5.0;
		}
		else if (codigo == 2) {
			valor = quantidade * 3.5;
		}
		else if (codigo == 3) {
			valor = quantidade * 4.8;
		}
		else if (codigo == 4) {
			valor = quantidade * 8.9;
		}
		else {
			valor = quantidade * 7.32;
		}
		
		System.out.println("Valor a pagar: R$ " + String.format("%.2f", valor));
		
		sc.close();
	}

}
