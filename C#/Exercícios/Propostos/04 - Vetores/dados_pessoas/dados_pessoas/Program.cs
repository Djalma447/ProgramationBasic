using System;
using System.Globalization;

namespace dados_pessoas
{
    class Program
    {
        static void Main(string[] args)
        {
            CultureInfo CI = CultureInfo.InvariantCulture;

            int N, mulheres, homens;
            double menorAltura, maiorAltura, somaMulheres, mediaMulheres;

            Console.Write("Quantas pessoas serao digitadas? ");
            N = int.Parse(Console.ReadLine());

            double[] alturas = new double[N];
            char[] generos = new char[N];

            for (int i = 0; i < N; i++)
            {
                Console.Write("Altura da " + (i+1) + "a pessoa: ");
                alturas[i] = double.Parse(Console.ReadLine(), CI);
                Console.Write("Genero da " + (i+1) + "a pessoa: ");
                generos[i] = char.Parse(Console.ReadLine());
            }

            menorAltura = alturas[0];
            maiorAltura = alturas[0];
            for (int i = 1; i < N; i++)
            {
                if (alturas[i] < menorAltura)
                {
                    menorAltura = alturas[i];
                }

                if (alturas[i] > maiorAltura)
                {
                    maiorAltura = alturas[i];
                }
            }

            somaMulheres = 0;
            mulheres = 0;
            homens = 0;
            for (int i = 0; i < N; i++)
            {
                if (generos[i] == 'M')
                {
                    homens++;
                }
                else
                {
                    mulheres++;
                    somaMulheres = somaMulheres + alturas[i];
                }
            }
            mediaMulheres = somaMulheres / mulheres;

            Console.WriteLine("Menor altura = " + menorAltura.ToString("F2", CI));
            Console.WriteLine("Maior altura = " + maiorAltura.ToString("F2", CI));
            Console.WriteLine("Media das alturas das mulheres = " + mediaMulheres.ToString("F2", CI));
            Console.WriteLine("Numero de homens = " + homens);
        }
    }
}
