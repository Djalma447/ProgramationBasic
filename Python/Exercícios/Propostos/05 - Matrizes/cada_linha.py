N = int(input("Qual a ordem da matriz? "))

mat: [[int]] = [[0 for x in range(N)] for x in range(N)]

for i in range(0, N):
    for j in range(0, N):
        mat[i][j] = int(input(f"Elemento [{i},{j}]: "))

vet: [int] = [0 for x in range(N)]
for i in range(0, N):
    vet[i] = mat[i][j]
    for j in range(0, N):
        if mat[i][j] > vet[i]:
            vet[i] = mat[i][j]

print("MAIOR ELEMENTO DE CADA LINHA:")
for i in range(0, N):
    print(vet[i])
