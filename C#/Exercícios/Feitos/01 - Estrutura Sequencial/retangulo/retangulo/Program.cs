using System;
using System.Globalization;

namespace retangulo
{
    class Program
    {
        static void Main(string[] args)
        {
            CultureInfo CI = CultureInfo.InvariantCulture;

            double Base, altura, area, perimetro, diagonal;

            Console.Write("Base do retangulo: ");
            Base = double.Parse(Console.ReadLine(), CI);
            Console.Write("Altura do retangulo: ");
            altura = double.Parse(Console.ReadLine(), CI);

            area = Base * altura;
            perimetro = 2 * (Base + altura);
            diagonal = Math.Sqrt(Math.Pow(Base, 2) + Math.Pow(altura, 2));

            Console.WriteLine("AREA = " + area.ToString("F4", CI));
            Console.WriteLine("PERIMETRO = " + perimetro.ToString("F4", CI));
            Console.WriteLine("DIAGONAL = " + diagonal.ToString("F4", CI));
        }
    }
}
