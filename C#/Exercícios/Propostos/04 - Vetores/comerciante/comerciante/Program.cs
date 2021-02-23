using System;
using System.Globalization;

namespace comerciante
{
    class Program
    {
        static void Main(string[] args)
        {
            CultureInfo CI = CultureInfo.InvariantCulture;

            int N, abaixo, entre, acima;
            double totalCompra, totalVenda, totalLucro;

            Console.Write("Serao digitados dados de quantos produtos? ");
            N = int.Parse(Console.ReadLine());

            string[] nomes = new string[N];
            double[] compras = new double[N];
            double[] vendas = new double[N];
            double[] lucros = new double[N];

            for (int i = 0; i < N; i++)
            {
                Console.WriteLine("Produto " + (i+1) + ":");
                Console.Write("Nome: ");
                nomes[i] = Console.ReadLine();
                Console.Write("Preco de compra: ");
                compras[i] = double.Parse(Console.ReadLine(), CI);
                Console.Write("Preco de venda: ");
                vendas[i] = double.Parse(Console.ReadLine(), CI);
            }

            for (int i = 0; i < N; i++)
            {
                lucros[i] = vendas[i] - compras[i];
            }

            abaixo = 0;
            entre = 0;
            acima = 0;
            double[] percentual = new double[N];
            for (int i = 0; i < N; i++)
            {
                percentual[i] = lucros[i] * 100.0 / compras[i];
                if (percentual[i] < 10.0)
                {
                    abaixo++;
                }
                else if (percentual[i] <= 20.0)
                {
                    entre++;
                }
                else
                {
                    acima++;
                }
            }

            totalCompra = 0;
            totalVenda = 0;
            totalLucro = 0;
            for (int i = 0; i < N; i++)
            {
                totalCompra = totalCompra + compras[i];
                totalVenda = totalVenda + vendas[i];
                totalLucro = totalLucro + (vendas[i] - compras[i]);
            }

            Console.WriteLine("\nRELATORIO:");
            Console.WriteLine("Lucro abaixo de 10%: " + abaixo);
            Console.WriteLine("Lucro entre 10% e 20%: " + entre);
            Console.WriteLine("Lucro acima de 20%: " + acima);
            Console.WriteLine("Valor total de compra: " + totalCompra.ToString("F2", CI));
            Console.WriteLine("Valor total de venda: " + totalVenda.ToString("F2", CI));
            Console.WriteLine("Valor total de lucro: " + totalLucro.ToString("F2", CI));
        }
    }
}
