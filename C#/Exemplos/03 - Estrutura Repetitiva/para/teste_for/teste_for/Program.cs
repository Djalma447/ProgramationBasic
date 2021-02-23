using System;

namespace teste_for
{
    class Program
    {
        static void Main(string[] args)
        {
            int N, x, soma;

            Console.Write("Quantos números serão digitados? ");
            N = int.Parse(Console.ReadLine());

            soma = 0;
            for (int i = 1; i <= N; i++)
            {
                Console.Write("Digite um número: ");
                x = int.Parse(Console.ReadLine());
                soma = soma + x;
            }

            Console.WriteLine("SOMA = " + soma);
        }
    }
}
