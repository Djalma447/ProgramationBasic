precoUnitario = float(input("Preço unitário do produto: "))
quantidade = int(input("Quantidade comprada: "))
dinheiro = float(input("Dinheiro recebido: "))

total = precoUnitario * quantidade

if dinheiro >= total:
    troco = dinheiro - total
    print(f"TROCO = {troco:.2f}")
else:
    resto = total - dinheiro
    print(f"DINHEIRO INSUFICIENTE. FALTAM {resto:.2f} REAIS")
