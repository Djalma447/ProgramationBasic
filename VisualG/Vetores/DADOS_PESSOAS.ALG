Algoritmo "dados_pessoas"

Var

   N, i, homens, mulheres : inteiro
   menorAltura, maiorAltura, somaMulheres, mediaMulheres : real
   alturas : vetor[0..9] de real
   generos : vetor[0..9] de caractere

Inicio

      escreva("Quantas pessoas serao digitadas? ")
      leia(N)
      
      para i de 0 ate N-1 faca
           escreva("Altura da ", i+1, "a pessoa: ")
           leia(alturas[i])
           escreva("Genero da ", i+1, "a pessoa: ")
           leia(generos[i])
      fimpara
      
      maiorAltura <- alturas[0]
      menorAltura <- alturas[0]
      para i de 1 ate N-1 faca
           se alturas[i] > maiorAltura entao
              maiorAltura <- alturas[i]
           fimse
      fimpara
      
      para i de 1 ate N-1 faca
           se alturas[i] < menorAltura entao
              menorAltura <- alturas[i]
           fimse
      fimpara
      
      homens <- 0
      mulheres <- 0
      somaMulheres <- 0
      para i de 0 ate N-1 faca
           se generos[i] = "M" entao
              homens <- homens + 1
           senao
                mulheres <- mulheres + 1
                somaMulheres <- somaMulheres + alturas[i]
           fimse
      fimpara
      
      mediaMulheres <- somaMulheres / mulheres
      
      escreval("Menor altura = ", menorAltura:3:2)
      escreval("Maior altura = ", maiorAltura:3:2)
      escreval("Media das alturas das mulheres = ", mediaMulheres:3:2)
      escreval("Numero de homens = ", homens)

Fimalgoritmo