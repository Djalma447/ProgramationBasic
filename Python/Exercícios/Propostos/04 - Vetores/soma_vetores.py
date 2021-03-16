N = int(input("Quantos valores vai ter cada vetor? "))
A: [int] = [0 for x in range(N)]
B: [int] = [0 for x in range(N)]
C: [int] = [0 for x in range(N)]

print("Digite os valores do vetor A:")
for i in range(0, N):
    A[i] = int(input())

print("Digite os valores do vetor B:")
for i in range(0, N):
    B[i] = int(input())

for i in range(0, N):
    C[i] = A[i] + B[i]

print("VETOR RESULTANTE:")
for i in range(0, N):
    print(C[i])
