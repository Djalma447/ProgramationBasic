N = int(input("Quantos numeros voce vai digitar? "))
vet = [0 for x in range(N)]

for i in range(0, N):
    vet[i] = int(input("Digite um numero: "))

print()
print("NUMEROS PARES:")
for i in range(0, N):
    if vet[i] % 2 == 0:
        print(f"{vet[i]} ", end='')

print()
print()
pares = 0
for i in range(0, N):
    if vet[i] % 2 == 0:
        pares = pares + 1

print(f"QUANTIDADE DE PARES = {pares}")
