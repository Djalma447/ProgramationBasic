N = int(input("Quantos alunos serao digitados? "))
nomes: [str] = [0 for x in range(N)]
notas1: [float] = [0 for x in range(N)]
notas2: [float] = [0 for x in range(N)]

for i in range(0, N):
    print(f"Digite nome, primeira e segunda nota do {i+1}o aluno:")
    nomes[i] = input()
    notas1[i] = float(input())
    notas2[i] = float(input())

medias: [float] = [0 for x in range(N)]
for i in range(0, N):
    medias[i] = (notas1[i] + notas2[i]) / 2

print("Alunos aprovados:")
for i in range(0, N):
    if medias[i] >= 6:
        print(nomes[i])
