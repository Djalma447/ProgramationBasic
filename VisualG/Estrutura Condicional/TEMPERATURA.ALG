Algoritmo "temperatura"

Var

  escala : caractere
  temperatura, resultado : real

Inicio

  escreva("Voce vai digitar a temperatura em qual escala (C/F)? ")
  leia(escala)
  
  se escala = "f" entao
     escreva("Digite a temperatura em Fahrenheit: ")
     leia(temperatura)
     resultado <- (temperatura - 32) * 5 / 9
     escreval("Temperatura equivalente em Celsius: ", resultado:5:2)
  senao
     se escala = "c" entao
     escreva("Digite a temperatura em Celsius: ")
     leia(temperatura)
     resultado <- temperatura * 9 / 5 + 32
     escreval("Temperatura equivalente em Fahrenheit: ", resultado:5:2)
     fimse
  fimse

Fimalgoritmo