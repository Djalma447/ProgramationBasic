Algoritmo "soma_vetores"

Var

   N, i : inteiro
   A : vetor[0..9] de inteiro
   B : vetor[0..9] de inteiro
   C : vetor[0..9] de inteiro

Inicio

      escreva("Quantos valores vai ter cada vetor? ")
      leia(N)
      
      escreval("Digite os valores do vetor A:")
      para i de 0 ate N-1 faca
           leia(A[i])
      fimpara
      
      escreval("Digite os valores do vetor B:")
      para i de 0 ate N-1 faca
           leia(B[i])
      fimpara
      
      escreval("VETOR RESULTANTE:")
      para i de 0 ate N-1 faca
           C[i] <- A[i] + B[i]
           escreval(C[i])
      fimpara

Fimalgoritmo