package prototipo;

import java.util.Locale;

public class Main {

	public static void main(String[] args) {

		Locale.setDefault(Locale.US);
		
		int idade;
		double salario, altura;
		char genero;
		String nome;
		
		idade = 32;
		salario = 2531.5;
		altura = 1.89;
		genero = 'F';
		nome = "Ana Sara";
		
		System.out.println("Idade = " + idade);
		System.out.println("Salario = " + String.format("%.2f", salario));
		System.out.println("Altura = " + String.format("%.2f", altura));
		System.out.println("Gênero = " + genero);
		System.out.println("Nome = " + nome);
	}

}
