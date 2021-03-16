precoUnitario = float(input("Preço unitário do produto: "))
quantidade = int(input("Quantidade comprada: "))
dinheiro = float(input("Dinheiro recebido: "))
troco = dinheiro - quantidade * precoUnitario
print(f"TROCO = {troco:.2f}")
