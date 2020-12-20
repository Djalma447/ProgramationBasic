Algoritmo "mais_velho"

Var

   N, i, maior : inteiro
   maisVelho : caractere
   nomes : vetor[0..9] de caractere
   idades : vetor[0..9] de inteiro

Inicio

      escreva("Quantas pessoas voce vai digitar? ")
      leia(N)
      
      para i de 0 ate N-1 faca
           escreval("Dados da ", i+1, "a pessoa:")
           escreva("Nome: ")
           leia(nomes[i])
           escreva("Idade: ")
           leia(idades[i])
      fimpara
      
      maior <- idades[0]
      
      para i de 1 ate N-1 faca
           se idades[i] > maior entao
              maior <- idades[i]
              maisVelho <- nomes[i]
           fimse
      fimpara
      
      escreval("PESSOA MAIS VELHA: ", maisVelho)

Fimalgoritmo