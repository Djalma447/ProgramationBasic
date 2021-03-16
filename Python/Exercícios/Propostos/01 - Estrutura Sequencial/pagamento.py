nome = input("Nome: ")
valorPorHora = float(input("Valor por hora: "))
horas = int(input("Horas trabalhadas: "))
pagamento = valorPorHora * horas
print(f"O pagamento para {nome} deve ser {pagamento:.2f}")
