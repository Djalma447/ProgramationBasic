using System;
using System.Globalization;

namespace experiencias
{
    class Program
    {
        static void Main(string[] args)
        {
            CultureInfo CI = CultureInfo.InvariantCulture;

            int N, quantidade, cobaias, coelhos, sapos, ratos;
            char tipo;
            double percentualCoelhos, percentualSapos, percentualRatos;

            Console.Write("Quantos casos de teste serao digitados? ");
            N = int.Parse(Console.ReadLine());

            cobaias = 0;
            coelhos = 0;
            sapos = 0;
            ratos = 0;

            for (int i = 1; i <= N; i++)
            {
                Console.Write("Quantidade de cobaias: ");
                quantidade = int.Parse(Console.ReadLine());
                Console.Write("Tipo de cobaia: ");
                tipo = char.Parse(Console.ReadLine());
                
                if (tipo == 'C')
                {
                    coelhos = coelhos + quantidade;
                }
                else if (tipo == 'S')
                {
                    sapos = sapos + quantidade;
                }
                else
                {
                    ratos = ratos + quantidade;
                }

                cobaias = cobaias + quantidade;
            }

            percentualCoelhos = coelhos * 100.0 / cobaias;
            percentualSapos = sapos * 100.0 / cobaias;
            percentualRatos = ratos * 100.0 / cobaias;

            Console.WriteLine("\nRELATORIO FINAL:");
            Console.WriteLine("Total: " + cobaias + " cobaias");
            Console.WriteLine("Total de coelhos: " + coelhos);
            Console.WriteLine("Total de ratos: " + ratos);
            Console.WriteLine("Total de sapos: " + sapos);
            Console.WriteLine("Percentual de coelhos: " + percentualCoelhos.ToString("F2", CI));
            Console.WriteLine("Percentual de ratos: " + percentualRatos.ToString("F2", CI));
            Console.WriteLine("Percentual de sapos: " + percentualSapos.ToString("F2", CI));
        }
    }
}
