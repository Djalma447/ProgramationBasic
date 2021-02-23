using System;
using System.Globalization;

namespace teste_vetor
{
    class Program
    {
        static void Main(string[] args)
        {
            CultureInfo CI = CultureInfo.InvariantCulture;
            
            int N;

            Console.Write("Quantos números você vai digitar? ");
            N = int.Parse(Console.ReadLine());

            double[] vet = new double[N];
            for (int i = 0; i < N; i++)
            {
                Console.Write("Digite um número: ");
                vet[i] = double.Parse(Console.ReadLine(), CI);
            }

            Console.WriteLine("\nNÚMEROS DIGITADOS:");
            for (int i = 0; i < N; i++)
            {
                Console.WriteLine(vet[i].ToString("F1", CI));
            }
        }
    }
}
