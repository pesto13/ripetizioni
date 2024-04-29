import random

# fa un solo tiro
def lancia_dadi():
    return random.randint(2,12)

# quello che crea una lista di 0
def prepara_lista():
    return [0 for _ in range(11)]

def stampa():
    for i in range(len(l)):
        print(i+2, ": ", end="")
        print("    ", end="")
        print("*"*l[i])

l = prepara_lista()
for i in range(100):
    esito = lancia_dadi()
    l[esito-2] += 1

stampa()



