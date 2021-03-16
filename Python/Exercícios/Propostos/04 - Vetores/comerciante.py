N = int(input("Serao digitados dados de quantos produtos? "))
nomes: [str] = [0 for x in range(N)]
compras: [float] = [0 for x in range(N)]
vendas: [float] = [0 for x in range(N)]
lucros: [float] = [0 for x in range(N)]
abaixo: int; entre: int; acima: int
totalCompra: float; totalVenda: float; totalLucro: float

for i in range(0, N):
    print(f"Produto {i+1}:")
    nomes[i] = input("Nomes: ")
    compras[i] = float(input("Preco de compra: "))
    vendas[i] = float(input("Preco de venda: "))

for i in range(0, N):
    lucros[i] = vendas[i] - compras[i]

totalCompra = 0
totalVenda = 0
for i in range(0, N):
    totalCompra = totalCompra + compras[i]
    totalVenda = totalVenda + vendas[i]

totalLucro = totalVenda - totalCompra

abaixo = 0
entre = 0
acima = 0
for i in range(0, N):
    percentual = lucros[i] * 100 / compras[i]
    if percentual < 10:
        abaixo = abaixo + 1
    elif percentual <= 20:
        entre = entre + 1
    else:
        acima = acima + 1

print()
print("RELATORIO:")
print(f"Lucro abaixo de 10%: {abaixo}")
print(f"Lucro entre 10% e 20%: {entre}")
print(f"Lucro acima de 20%: {acima}")
print(f"Valor total de compra: {totalCompra:.2f}")
print(f"Valor total de venda: {totalVenda:.2f}")
print(f"Lucro total: {totalLucro:.2f}")
