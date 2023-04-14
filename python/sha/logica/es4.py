import random
N = int(input("inserisci N: "))

somma = 0

for i in range(N):
    somma = somma + random.randint(0, 100)


print(somma)