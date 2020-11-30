Algoritmo "media_idades"

Var

  idade, soma, quantidade : inteiro
  media : real

Inicio

  quantidade <- 0
  soma <- 0
  
  escreval("Digite as idades:")
  leia(idade)
  
  enquanto idade >= 0 faca
     soma <- soma + idade
     quantidade <- quantidade + 1
     leia(idade)
  fimenquanto
  
  se quantidade > 0 entao
     media <- soma / quantidade
     escreval("MEDIA = ", media:4:2)
  senao
     escreval("IMPOSSIVEL CALCULAR")
  fimse

Fimalgoritmo