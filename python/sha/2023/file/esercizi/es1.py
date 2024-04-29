file = open('esercizi/es1.txt', 'w')

l = []

for i in range(3):
    s = input("Inserisci la parola")
    l.append(s+'\n')

file.writelines(l)

file.close()