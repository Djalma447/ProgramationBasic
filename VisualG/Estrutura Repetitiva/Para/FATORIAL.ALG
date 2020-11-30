Algoritmo "fatorial"

Var

   N, i, fatorial : inteiro

Inicio

      escreva("Digite o valor de N: ")
      leia(N)
      fatorial <- N
      
      para i de N-1 ate 1 passo -1 faca
           fatorial <- fatorial * i
      fimpara
      
      se fatorial = 0 entao
         fatorial <- 1
      fimse
      
      escreval("FATORIAL = ", fatorial)

Fimalgoritmo