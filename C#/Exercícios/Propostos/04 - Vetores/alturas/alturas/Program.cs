using System;
using System.Globalization;

namespace alturas
{
    class Program
    {
        static void Main(string[] args)
        {
            CultureInfo CI = CultureInfo.InvariantCulture;

            int N, menores;
            double soma, media, percentualMenores;
            
            Console.Write("Quantas pessoas serao digitadas? ");
            N = int.Parse(Console.ReadLine());

            string[] nomes = new string[N];
            int[] idades = new int[N];
            double[] alturas = new double[N];

            for (int i = 0; i < N; i++)
            {
                Console.WriteLine("Dados da " + (i+1) + "a pessoa:");
                Console.Write("Nome: ");
                nomes[i] = Console.ReadLine();
                Console.Write("Idade: ");
                idades[i] = int.Parse(Console.ReadLine());
                Console.Write("Altura: ");
                alturas[i] = double.Parse(Console.ReadLine(), CI);
            }

            soma = 0;
            for (int i = 0; i < N; i++)
            {
                soma = soma + alturas[i];
            }
            media = soma / N;

            menores = 0;
            for (int i = 0; i < N; i++)
            {
                if (idades[i] < 16)
                {
                    menores++;
                }
            }
            percentualMenores = menores * 100.0 / N;

            Console.WriteLine("\nAltura média: " + media.ToString("F2", CI));
            Console.WriteLine("Pessoas com menos de 16 anos: " + percentualMenores.ToString("F1", CI) + "%");
            for (int i = 0; i < N; i++)
            {
                if (idades[i] < 16)
                {
                    Console.WriteLine(nomes[i]);
                }
            }

        }
    }
}
