N = int(input("Digite o valor de N: "))

fatorial = 1

for i in range(1, N+1):
    fatorial = fatorial * i

print(f"FATORIAL = {fatorial}")
