N = int(input("Quantos casos voce vai digitar? "))

for i in range(0, N):
    print("Digite tres numeros:")
    nota1 = float(input())
    nota2 = float(input())
    nota3 = float(input())
    media = (nota1 * 2 + nota2 * 3 + nota3 * 5) / 10
    print(f"MEDIA = {media:.1f}")
