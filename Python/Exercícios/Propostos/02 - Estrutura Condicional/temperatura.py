escala = input("Voce vai digitar a temperatura em qual escala (C/F)? ")

if escala == 'F':
    F = float(input("Digite a temperatura em Fahrenheit: "))
    C = 5 / 9 * (F - 32)
    print(f"Temperatura equivalente em Celsius: {C:.2f}")
else:
    C = float(input("Digite a temperatura em Celsius: "))
    F = C * 9 / 5 + 32
    print(f"Temperatura equivalente em Fahrenheit: {F:.2f}")
