N = int(input("Quantas pessoas serao digitadas? "))
nomes = [0 for x in range(N)]
idades = [0 for x in range(N)]
alturas = [0 for x in range(N)]

for i in range(0, N):
    print(f"Dados da {i+1}a pessoa:")
    nomes[i] = input("Nome: ")
    idades[i] = int(input("Idade: "))
    alturas[i] = float(input("Altura: "))

soma = 0
for i in range(0, N):
    soma = soma + alturas[i]

media = soma / N

menores = 0
for i in range(0, N):
    if idades[i] < 16:
        menores = menores + 1

print()
print(f"Altura média: {media:.2f}")
porcentagemMenores = menores * 100 / N
print(f"Pessoas com menos de 16 anos: {porcentagemMenores:.1f}%")
for i in range(0, N):
    if idades[i] < 16:
        print(nomes[i])
