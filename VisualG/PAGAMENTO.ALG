Algoritmo "pagamento"

Var

  nome : caractere
  valorPorHora, total : real
  horas : inteiro

Inicio

  escreva("Nome: ")
  leia(nome)
  escreva("Valor por hora: ")
  leia(valorPorHora)
  escreva("Horas trabalhadas: ")
  leia(horas)

  total <- valorPorHora * horas
  
  escreval("O pagamento para ", nome, " deve ser ", total:6:2)

Fimalgoritmo