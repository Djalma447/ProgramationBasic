Algoritmo "troco"

Var

  precoUnitario, dinheiroRecebido, total, troco: real
  quantidadeComprada : inteiro

Inicio

  escreva("Pre�o unit�rio do produto: ")
  leia(precoUnitario)
  escreva("Quantidade comprada: ")
  leia(quantidadeComprada)
  escreva("Dinheiro recebido: ")
  leia(dinheiroRecebido)
  total <- precoUnitario * quantidadeComprada
  troco <- dinheiroRecebido - total
  escreval("TROCO: ", troco:4:2)

Fimalgoritmo