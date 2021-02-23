using System;

namespace teste_while
{
    class Program
    {
        static void Main(string[] args)
        {
            int x, soma;

            soma = 0;
            Console.Write("Digite o primeiro número: ");
            x = int.Parse(Console.ReadLine());

            while (x != 0)
            {
                soma = soma + x;
                Console.Write("Digite outro número: ");
                x = int.Parse(Console.ReadLine());
            }

            Console.WriteLine("SOMA = " + soma);
        }
    }
}
