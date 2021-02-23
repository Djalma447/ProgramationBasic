using System;

namespace par_impar
{
    class Program
    {
        static void Main(string[] args)
        {
            int N, x;

            Console.Write("Quantos numeros voce vai digitar? ");
            N = int.Parse(Console.ReadLine());

            for (int i = 1; i <= N; i++)
            {
                Console.Write("Digite um numero: ");
                x = int.Parse(Console.ReadLine());
                if (x == 0)
                {
                    Console.WriteLine("NULO");
                }
                else if (x % 2 == 0)
                {
                    Console.Write("PAR ");
                    if (x > 0)
                    {
                        Console.WriteLine("POSITIVO");
                    }
                    else
                    {
                        Console.WriteLine("NEGATIVO");
                    }
                }
                else
                {
                    Console.Write("IMPAR ");
                    if (x > 0)
                    {
                        Console.WriteLine("POSITIVO");
                    }
                    else
                    {
                        Console.WriteLine("NEGATIVO");
                    }
                }
            }
        }
    }
}
