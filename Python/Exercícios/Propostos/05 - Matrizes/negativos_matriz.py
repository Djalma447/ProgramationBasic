M = int(input("Qual a quantidade de linhas da matriz? "))
N = int(input("Qual a quantidade de colunas da matriz? "))

mat: [[int]] = [[0 for x in range(N)] for x in range(M)]

for i in range(0, M):
    for j in range(0, N):
        mat[i][j] = int(input(f"Elemento [{i},{j}]: "))

print("VALORES NEGATIVOS:")
for i in range(0, M):
    for j in range(0, N):
        if mat[i][j] < 0:
            print(mat[i][j])
