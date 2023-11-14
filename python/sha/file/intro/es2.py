file = open('libri.py', 'r')
testo = file.readlines()

for riga in testo:
    print(riga)

file.close()