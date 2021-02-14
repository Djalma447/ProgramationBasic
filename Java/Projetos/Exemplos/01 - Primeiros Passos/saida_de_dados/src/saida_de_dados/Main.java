package saida_de_dados;

import java.util.Locale;

public class Main {

	public static void main(String[] args) {
		
		Locale.setDefault(Locale.US);
		
		int idade;
		double salario;
		char sexo;
		String nome;
		
		idade = 32;
		salario = 4580.7;
		sexo = 'F';
		nome = "Virginia";
		
		System.out.println("A funcionária " + nome + ", sexo " + sexo + ", ganha " 
							+ String.format("%.2f", salario) + " e tem "
							+ idade + " anos");
	}

}
