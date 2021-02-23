using System;
using System.Globalization;

namespace saida_de_dados
{
    class Program
    {
        static void Main(string[] args)
        {
            CultureInfo CI = CultureInfo.InvariantCulture;

            int idade;
            double salario;
            string nome;
            char genero;

            idade = 32;
            salario = 4560.9;
            nome = "Maria Silva";
            genero = 'F';

            Console.WriteLine("A funcionaria " + nome + ", sexo " + genero 
                + ", ganha " + salario.ToString("F2", CI) + " e tem " + idade + " anos");
            
        }
    }
}
