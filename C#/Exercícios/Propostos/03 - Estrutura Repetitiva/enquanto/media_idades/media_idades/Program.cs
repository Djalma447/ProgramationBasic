using System;
using System.Globalization;

namespace media_idades
{
    class Program
    {
        static void Main(string[] args)
        {
            CultureInfo CI = CultureInfo.InvariantCulture;

            int x, soma, quantidade;
            double media;
            
            Console.WriteLine("Digite as idades:");
            x = int.Parse(Console.ReadLine());

            quantidade = 0;
            soma = 0;

            while (x > 0)
            {
                quantidade++;
                soma = soma + x;
                x = int.Parse(Console.ReadLine());
            }

            if (quantidade > 0)
            {
                media = (double)soma / quantidade;
                Console.WriteLine("MEDIA = " + media.ToString("F2", CI));
            }
            else
            {
                Console.WriteLine("IMPOSSIVEL CALCULAR");
            }
        }
    }
}
