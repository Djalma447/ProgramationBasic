N = int(input("Quantos elementos vai ter o vetor? "))
vet: [int] = [0 for x in range(N)]

for i in range(0, N):
    vet[i] = int(input("Digite um numero: "))

pares = 0
soma = 0
for i in range(0, N):
    if vet[i] % 2 == 0:
        soma = soma + vet[i]
        pares = pares + 1

if pares == 0:
    print("NENHUM NUMERO PAR")
else:
    media = soma / pares
    print(f"MEDIA DOS PARES = {media:.1f}")
