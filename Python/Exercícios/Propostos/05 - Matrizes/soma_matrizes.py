M = int(input("Quantas linhas vai ter cada matriz? "))
N = int(input("Quantas colunas vai ter cada matriz? "))

A: [[int]] = [[0 for x in range(N)] for x in range(M)]
B: [[int]] = [[0 for x in range(N)] for x in range(M)]
C: [[int]] = [[0 for x in range(N)] for x in range(M)]

print("Digite os valores da matriz A:")
for i in range(0, M):
    for j in range(0, N):
        A[i][j] = int(input(f"Elemento [{i},{j}]: "))

print("Digite os valores da matriz B:")
for i in range(0, M):
    for j in range(0, N):
        B[i][j] = int(input(f"Elemento [{i},{j}]: "))

for i in range(0, M):
    for j in range(0, N):
        C[i][j] = A[i][j] + B[i][j]

print("MATRIZ SOMA:")
for i in range(0, M):
    for j in range(0, N):
        print(f"{C[i][j]} ", end='')
    print()
