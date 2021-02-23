using System;
using System.Globalization;

namespace troco
{
    class Program
    {
        static void Main(string[] args)
        {
            CultureInfo CI = CultureInfo.InvariantCulture;

            double precoUnitario, dinheiro, total, troco;
            int quantidade;

            Console.Write("Preço unitário do produto: ");
            precoUnitario = double.Parse(Console.ReadLine(), CI);
            Console.Write("Quantidade comprada: ");
            quantidade = int.Parse(Console.ReadLine());
            Console.Write("Dinheiro recebido: ");
            dinheiro = double.Parse(Console.ReadLine(), CI);

            total = precoUnitario * quantidade;
            troco = dinheiro - total;

            Console.WriteLine("TROCO = " + troco.ToString("F2", CI));
        }
    }
}
