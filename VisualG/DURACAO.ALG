Algoritmo "duracao"

Var

  duracao, horas, minutos, segundos : inteiro

Inicio

  escreva("Digite a duração em segundos: ")
  leia(duracao)
  
  minutos <- duracao \ 60
  segundos <- duracao % 60
  horas <- minutos \ 60
  minutos <- minutos % 60
  
  escreva(horas, ":", minutos, ":", segundos)

Fimalgoritmo