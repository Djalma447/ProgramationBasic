N = int(input("Quantas pessoas voce vai digitar? "))
nomes: [str] = [0 for x in range(N)]
idades: [int] = [0 for x in range(N)]

for i in range(0, N):
    print(f"Dados da {i+1}a pessoa:")
    nomes[i] = input("Nome: ")
    idades[i] = int(input("Idade: "))

maisVelho = idades[0]
posMaisVelho = 0
for i in range(0, N):
    if idades[i] > maisVelho:
        maisVelho = idades[i]
        posMaisVelho = i

print(f"PESSOA MAIS VELHA: {nomes[posMaisVelho]}")
