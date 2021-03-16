import math

A = float(input("Coeficiente a: "))
B = float(input("Coeficiente b: "))
C = float(input("Coeficiente c: "))

delta = B ** 2 - 4 * A * C

if delta < 0 or A == 0:
    print("Esta equacao nao possui raizes reais")
else:
    X1 = (-B + math.sqrt(delta)) / (2 * A)
    X2 = (-B - math.sqrt(delta)) / (2 * A)
    print(f"X1 = {X1:.4f}")
    print(f"X2 = {X2:.4f}")
