using System;

namespace tempo_de_jogo
{
    class Program
    {
        static void Main(string[] args)
        {
            int inicial, final, duracao;

            Console.Write("Hora inicial: ");
            inicial = int.Parse(Console.ReadLine());
            Console.Write("Hora final: ");
            final = int.Parse(Console.ReadLine());

            if (inicial < final)
            {
                duracao = final - inicial;
            }
            else
            {
                duracao = 24 - inicial + final;
            }

            Console.WriteLine("O JOGO DUROU " + duracao + " HORA(S)");
        }
    }
}
