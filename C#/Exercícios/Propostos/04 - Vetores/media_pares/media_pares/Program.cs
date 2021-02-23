using System;
using System.Globalization;

namespace media_pares
{
    class Program
    {
        static void Main(string[] args)
        {
            CultureInfo CI = CultureInfo.InvariantCulture;

            int N;
            double pares, soma, media;
            
            Console.Write("Quantos elementos vai ter o vetor? ");
            N = int.Parse(Console.ReadLine());

            int[] vet = new int[N];

            for (int i = 0; i < N; i++)
            {
                Console.Write("Digite um numero: ");
                vet[i] = int.Parse(Console.ReadLine());
            }

            pares = 0;
            for (int i = 0; i < N; i++)
            {
                if (vet[i] % 2 == 0)
                {
                    pares++;
                }
            }

            if (pares == 0)
            {
                Console.WriteLine("NENHUM NUMERO PAR");
            }
            else
            {
                soma = 0;
                for (int i = 0; i < N; i++)
                {
                    if (vet[i] % 2 == 0)
                    {
                        soma = soma + vet[i];
                    }
                }
                media = soma / pares;
                Console.WriteLine("MEDIA DOS PARES = " + media.ToString("F1", CI));
            }
        }
    }
}
