Algoritmo "pares_consecutivos"

Var

  X, soma, quantidade : inteiro

Inicio

  quantidade <- 0
  soma <- 0
  escreva("Digite um numero inteiro: ")
  leia(X)

  enquanto X <> 0 faca

     se (X % 2 = 0) entao
        enquanto quantidade < 5 faca
           soma <- soma + X
           quantidade <- quantidade + 1
           X <- X + 2
        fimenquanto
     senao
        X <- X + 1
        enquanto quantidade < 5 faca
           soma <- soma + X
           quantidade <- quantidade + 1
           X <- X + 2
        fimenquanto
     fimse

     escreval("SOMA = ", soma)
     soma <- 0
     quantidade <- 0

     escreva("Digite um numero inteiro: ")
     leia(X)

  fimenquanto

Fimalgoritmo