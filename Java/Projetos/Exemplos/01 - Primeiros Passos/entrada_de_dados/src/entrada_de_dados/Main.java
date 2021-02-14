package entrada_de_dados;

import java.util.Locale;
import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		
		Locale.setDefault(Locale.US);
		Scanner sc = new Scanner(System.in);

		double salario1, salario2;
		String nome1, nome2;
		int idade;
		char sexo;
		
		System.out.print("Digite o nome da primeira pessoa: ");
		nome1 = sc.nextLine();
		System.out.print("Digite o salario da primeira pessoa: ");
		salario1 = sc.nextDouble();
		
		System.out.print("Digite o nome da segunda pessoa: ");
		sc.nextLine();
		nome2 = sc.nextLine();
		System.out.print("Digite o salario da segunda pessoa: ");
		salario2 = sc.nextDouble();
		
		System.out.print("Digite uma idade: ");
		idade = sc.nextInt();
		System.out.print("Digite um sexo (F/M): ");
		sexo = sc.next().charAt(0);
		
		System.out.println("Nome 1: " + nome1);
		System.out.println("Salario 1: " + salario1);
		System.out.println("Nome 2: " + nome2);
		System.out.println("Salario 2: " + salario2);
		System.out.println("Idade: " + idade);
		System.out.println("Sexo: " + sexo);
		
		sc.close();
	}

}
