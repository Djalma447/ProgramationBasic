Algoritmo "experiencias"

Var

   N, i, C, R, S, quantidade, total : inteiro
   pc, pr, ps: real
   tipoCobaia : caractere

Inicio

      C <- 0
      R <- 0
      S <- 0
      total <- 0
      
      escreva("Quantos casos de teste serao digitados? ")
      leia(N)
      
      para i de 1 ate N faca
           escreva("Quantidade de cobaias: ")
           leia(quantidade)
           escreva("Tipo de cobaia: ")
           leia(tipoCobaia)
           
           escolha tipoCobaia
              caso "C"
                 C <- C + quantidade
              caso "R"
                 R <- R + quantidade
              caso "S"
                 S <- S + quantidade
           fimescolha
           
           total <- total + quantidade
      fimpara
      
      pc <- C / total * 100
      pr <- R / total * 100
      ps <- S / total * 100
      
      escreval()
      
      escreval("RELATORIO FINAL:")
      escreval("Total: ", total, " cobaias")
      escreval("Total de coelhos: ", C)
      escreval("Total de ratos: ", R)
      escreval("Total de sapos: ", S)
      escreval("Percentual de coelhos: ", pc:4:2)
      escreval("Percentual de ratos: ", pr:4:2)
      escreval("Percentual de sapos: ", ps:4:2)

Fimalgoritmo