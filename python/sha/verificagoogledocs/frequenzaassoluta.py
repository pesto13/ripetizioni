import random

def lancia_dadi():
    return random.randint(2,12)

def prepara_lista():
    l = []
    for _ in range(11):
        l.append(0)
    return l

def stampa():
    for i in range(len(l)):
        print(i+2, ": ", end="")
        print("    ", end="")
        for _ in range(l[i]):
            print("*", end="")
        print("")
        

l = prepara_lista()
for i in range(100):
    esito = lancia_dadi()
    l[esito-2] += 1

stampa()



