using System;
using System.Globalization;

namespace media_ponderada
{
    class Program
    {
        static void Main(string[] args)
        {
            CultureInfo CI = CultureInfo.InvariantCulture;

            int N;
            double nota1, nota2, nota3, media;

            Console.Write("Quantos casos voce vai digitar? ");
            N = int.Parse(Console.ReadLine());

            for (int i = 1; i <= N; i++)
            {
                Console.WriteLine("Digite tres numeros:");
                nota1 = double.Parse(Console.ReadLine(), CI);
                nota2 = double.Parse(Console.ReadLine(), CI);
                nota3 = double.Parse(Console.ReadLine(), CI);
                media = (nota1 * 2 + nota2 * 3 + nota3 * 5) / 10;
                Console.WriteLine("MEDIA = " + media.ToString("F1", CI));
            }
        }
    }
}
