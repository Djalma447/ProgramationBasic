using System;
using System.Globalization;

namespace pagamento
{
    class Program
    {
        static void Main(string[] args)
        {
            CultureInfo CI = CultureInfo.InvariantCulture;

            string nome;
            double valor, total;
            int horas;

            Console.Write("Nome: ");
            nome = Console.ReadLine();
            Console.Write("Valor por hora: ");
            valor = double.Parse(Console.ReadLine(), CI);
            Console.Write("Horas trabalhadas: ");
            horas = int.Parse(Console.ReadLine());

            total = valor * horas;
            Console.WriteLine("O pagamento para " + nome + " deve ser " + total.ToString("F2", CI));
        }
    }
}
