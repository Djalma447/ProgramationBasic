using System;

namespace numeros_pares
{
    class Program
    {
        static void Main(string[] args)
        {
            int N, pares;

            Console.Write("Quantos numeros voce vai digitar? ");
            N = int.Parse(Console.ReadLine());

            int[] vet = new int[N];

            for (int i = 0; i < N; i++)
            {
                Console.Write("Digite um numero: ");
                vet[i] = int.Parse(Console.ReadLine());
            }

            Console.WriteLine("\nNUMEROS PARES:");
            for (int i = 0; i < N; i++)
            {
                if (vet[i] % 2 == 0)
                {
                    Console.Write(vet[i] + " ");
                }
            }

            pares = 0;
            for (int i = 0; i < N; i++)
            {
                if (vet[i] % 2 == 0)
                {
                    pares++;
                }
            }
            Console.WriteLine("\n\nQUANTIDADE DE PARES = " + pares);

        }
    }
}
