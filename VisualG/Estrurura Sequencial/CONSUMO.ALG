Algoritmo "consumo"

Var

  distancia : inteiro
  gasto, media : real

Inicio

  escreva("Distancia percorrida: ")
  leia(distancia)
  escreva("Combustível gasto: ")
  leia(gasto)

  media <- distancia / gasto
  
  escreval("Consumo médio = ", media:6:3)

Fimalgoritmo