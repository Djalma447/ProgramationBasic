Algoritmo "troco_verificado"

Var

  precoUnitario, dinheiroRecebido, total, troco, falta : real
  quantidade : inteiro

Inicio

  escreva("Preço unitário do produto: ")
  leia(precoUnitario)
  escreva("Quantidade comprada: ")
  leia(quantidade)
  escreva("Dinheiro recebido: ")
  leia(dinheiroRecebido)
  
  total <- precoUnitario * quantidade
  
  se dinheiroRecebido >= total entao
     troco <- dinheiroRecebido - total
     escreval("TROCO = ", troco:4:2)
  senao
     falta <- total - dinheiroRecebido
     escreval("DINHEIRO INSUFICIENTE. FALTAM ", falta:4:2, " REAIS")
  fimse

Fimalgoritmo