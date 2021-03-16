N = int(input("Quantos casos de teste serao digitados? "))

cobaias = 0
coelhos = 0
ratos = 0
sapos = 0

for i in range(0, N):
    quantidade = int(input("Quantidade de cobaias: "))
    tipo = input("Tipo de cobaia: ")
    if tipo == 'C':
        coelhos = coelhos + quantidade
    elif tipo == 'R':
        ratos = ratos + quantidade
    else:
        sapos = sapos + quantidade
    cobaias = cobaias + quantidade

print()
percentualCoelhos = coelhos * 100 / cobaias
percentualRatos = ratos * 100 / cobaias
percentualSapos = sapos * 100 / cobaias

print("RELATORIO FINAL:")
print(f"Total: {cobaias} cobaias")
print(f"Total de coelhos: {coelhos}")
print(f"Total de ratos: {ratos}")
print(f"Total de sapos: {sapos}")
print(f"Percentual de coelhos: {percentualCoelhos:.2f}")
print(f"Percentual de ratos: {percentualRatos:.2f}")
print(f"Percentual de sapos: {percentualSapos:.2f}")
