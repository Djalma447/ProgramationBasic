Algoritmo "maior_posicao"

Var

   N, i, posicaoMaior : inteiro
   maior : real
   vet : vetor[0..9] de real

Inicio

      escreva("Quanto numeros voce vai digitar? ")
      leia(N)
      
      para i de 0 ate N-1 faca
           escreva("Digite um numero: ")
           leia(vet[i])
      fimpara
      
      maior <- vet[0]
      posicaoMaior <- 0
      
      para i de 1 ate N-1 faca
           se vet[i] > maior entao
              maior <- vet[i]
              posicaoMaior <- i
           fimse
      fimpara
      
      escreval
      escreval("MAIOR VALOR = ", maior:3:1)
      escreval("POSICAO DO MAIOR VALOR = ", posicaoMaior)

Fimalgoritmo