Algoritmo "lanchonete"

Var

  codigo, quantidade : inteiro
  valor : real

Inicio

  escreva("Codigo do produto comprado: ")
  leia(codigo)
  escreva("Quantidade comprada: ")
  leia(quantidade)
  
  escolha codigo
  caso 1
     valor <- quantidade * 5.0
  caso 2
     valor <- quantidade * 3.5
  caso 3
     valor <- quantidade * 4.8
  caso 4
     valor <- quantidade * 8.9
  caso 5
     valor <- quantidade * 7.32
  fimescolha
  
  escreval("Valor a pagar: R$ ", valor:5:2)

Fimalgoritmo