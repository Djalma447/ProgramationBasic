Algoritmo "medidas"

Var

  a, b, c, quadrado, triangulo, trapezio : real

Inicio

  escreva("Digite a medida A: ")
  leia(a)
  escreva("Digite a medida B: ")
  leia(b)
  escreva("Digite a medida C: ")
  leia(c)
  
  quadrado <- Exp(a, 2)
  triangulo <- a * b / 2
  trapezio <- ((a + b) / 2) * c
  
  escreval("AREA DO QUADRADO = ", quadrado:7:4)
  escreval("AREA DO TRIANGULO = ", triangulo:7:4)
  escreval("AREA DO TRAPEZIO = ", trapezio:7:4)

Fimalgoritmo