using System;

namespace cada_linha
{
    class Program
    {
        static void Main(string[] args)
        {
            int N;
            
            Console.Write("Qual a ordem da matriz? ");
            N = int.Parse(Console.ReadLine());

            int[,] mat = new int[N, N];

            for (int i = 0; i < N; i++)
            {
                for (int j = 0; j < N; j++)
                {
                    Console.Write("Elemento [" + i + "," + j + "]: ");
                    mat[i, j] = int.Parse(Console.ReadLine());
                }
            }

            int[] maiores = new int[N];
            for (int i = 0; i < N; i++)
            {
                maiores[i] = mat[i, 0];
                for (int j = 1; j < N; j++)
                {
                    if (mat[i,j] > maiores[i])
                    {
                        maiores[i] = mat[i, j];
                    }
                }
            }

            Console.WriteLine("MAIOR ELEMENTO DE CADA LINHA:");
            for (int i = 0; i < N; i++)
            {
                Console.WriteLine(maiores[i]);
            }
        }
    }
}
