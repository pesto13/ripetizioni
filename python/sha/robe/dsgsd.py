


import random

lista = []

n = int(input("Inserisci N: "))

for i in range(n):
    lista.append(random.randint(1,4))

print(lista)
    
print("//////////////")


for i in range(len(lista)):
    lista[i] = lista[i]**2


print(lista)