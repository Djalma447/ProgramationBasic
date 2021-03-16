codigo = int(input("Codigo do produto comprado: "))
quantidade = int(input("Quantidade comprada: "))

if codigo == 1:
    valor = quantidade * 5.0
elif codigo == 2:
    valor = quantidade * 3.5
elif codigo == 3:
    valor = quantidade * 4.8
elif codigo == 4:
    valor = quantidade * 8.9
else:
    valor = quantidade * 7.32

print(f"Valor a pagar: R$ {valor:.2f}")
