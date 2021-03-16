N = int(input("Quantas pessoas serao digitadas? "))
alturas: [float] = [0 for x in range(N)]
generos: [str] = [0 for x in range(N)]

for i in range(0, N):
    alturas[i] = float(input(f"Altura da {i+1}a pessoa: "))
    generos[i] = input(f"Genero da {i+1}a pessoa: ")

menorAltura = alturas[0]
maiorAltura = alturas[0]
for i in range(1, N):
    if alturas[i] < menorAltura:
        menorAltura = alturas[i]
    if alturas[i] > maiorAltura:
        maiorAltura = alturas[i]

print(f"Menor altura = {menorAltura:.2f}")
print(f"Maior altura = {maiorAltura:.2f}")

mulheres = 0
somaMulheres = 0
homens = 0
for i in range(0, N):
    if generos[i] == 'F':
        mulheres = mulheres + 1
        somaMulheres = somaMulheres + alturas[i]
    else:
        homens = homens + 1

mediaMulheres = somaMulheres / mulheres
print(f"Media das alturas das mulheres = {mediaMulheres:.2f}")
print(f"Numero de homens = {homens}")
