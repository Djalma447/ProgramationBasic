package teste_debug;

import java.util.Locale;
import java.util.Scanner;

public class Main {

	public static void main(String[] args) {

		Locale.setDefault(Locale.US);
		Scanner sc = new Scanner(System.in);
		
		int x, y, z;
		
		x = sc.nextInt();
		System.out.println(x);
		y = x * 2;
		System.out.println(y);
		z = x * x * x;
		System.out.println(z);
		
		sc.close();

	}

}
