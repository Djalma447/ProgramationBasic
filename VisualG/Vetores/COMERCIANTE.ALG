Algoritmo "comerciante"

Var

   N, i, abaixo10, entre10e20, acima20 : inteiro
   totalCompra, totalVenda, totalLucro, lucro, porcentagem : real
   nomes : vetor[0..9] de caractere
   compras : vetor[0..9] de real
   vendas : vetor[0..9] de real

Inicio

      escreva("Serao digitados dados de quantos produtos? ")
      leia(N)
      
      para i de 0 ate N-1 faca
           escreval("Produto ", i+1, ":")
           escreva("Nome: ")
           leia(nomes[i])
           escreva("Preco de compra: ")
           leia(compras[i])
           escreva("Preco de venda: ")
           leia(vendas[i])
      fimpara
      
      abaixo10 <- 0
      entre10e20 <- 0
      acima20 <- 0
      para i de 0 ate N-1 faca
           lucro <- vendas[i] - compras[i]
           porcentagem <- lucro * 100 / compras[i]
           se porcentagem < 10 entao
              abaixo10 <- abaixo10 +1
           senao
                se (porcentagem >= 10) e (porcentagem <= 20) entao
                   entre10e20 <- entre10e20 + 1
                senao
                     acima20 <- acima20 + 1
                fimse
           fimse
      fimpara
      
      totalCompra <- 0
      totalVenda <- 0
      totalLucro <- 0
      para i de 0 ate N-1 faca
           totalCompra <- totalCompra + compras[i]
           totalVenda <- totalVenda + vendas[i]
           totalLucro <- totalLucro + vendas[i] - compras[i]
      fimpara
      
      escreval
      escreval("RELATORIO:")
      escreval("Lucro abaixo de 10%: ", abaixo10)
      escreval("Lucro entre 10% e 20%: ", entre10e20)
      escreval("Lucro acima de 20%: ", acima20)
      escreval("Valor total de compra: ", totalCompra:4:2)
      escreval("Valor total de venda: ", totalVenda:4:2)
      escreval("Lucro total: ", totalLucro:4:2)

Fimalgoritmo