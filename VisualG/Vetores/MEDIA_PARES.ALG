Algoritmo "media_pares"

Var

   N, i, quantidadePares : inteiro
   soma, media : real
   vet : vetor[0..9] de inteiro

Inicio

      escreva("Quantos elementos vai ter o vetor? ")
      leia(N)
      
      quantidadePares <- 0
      soma <- 0
      
      para i de 0 ate N-1 faca
           escreva("Digite um numero: ")
           leia(vet[i])
      fimpara
      
      para i de 0 ate N-1 faca
           se vet[i] % 2 = 0 entao
              soma <- soma + vet[i]
              quantidadePares <- quantidadePares + 1
           fimse
      fimpara
      
      se quantidadePares = 0 entao
         escreval("NENHUM NUMERO PAR")
      senao
           media <- soma / quantidadePares
           escreva("MEDIA DOS PARES = ", media:3:1)
      fimse

Fimalgoritmo