import funz
import random
N = int(input("dammi il numero di lanci: "))
lanci = funz.genera_lista_random(N, 2, 12)
frequenze = [0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0]
for x in lanci:
    frequenze[x-2] = frequenze[x-2]+1
for x in range(2, 12):
    print(x, ":", funz.istogramma(frequenze[x-2]), end="")
    print()