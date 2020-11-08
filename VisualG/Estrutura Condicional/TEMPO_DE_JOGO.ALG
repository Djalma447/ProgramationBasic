Algoritmo "tempo_de_jogo"

Var

  inicial, final, duracao : inteiro

Inicio

  escreva("Hora inicial: ")
  leia(inicial)
  escreva("Hora final: ")
  leia(final)

  se inicial >= final entao
     duracao <- 24 - inicial + final
  senao
     duracao <- final - inicial
  fimse
  
  escreval("O JOGO DUROU ", duracao, " HORA(S)")

Fimalgoritmo