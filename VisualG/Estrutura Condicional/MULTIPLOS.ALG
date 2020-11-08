Algoritmo "multiplos"

Var

  a, b : inteiro

Inicio

  escreval("Digite dois numeros inteiros:")
  leia(a)
  leia(b)
  
  se (a % b = 0) ou (b % a = 0) entao
     escreval("Sao multiplos")
  senao
     escreval("Nao sao multiplos")
  fimse

Fimalgoritmo