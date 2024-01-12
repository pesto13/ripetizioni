testo = input("Inserisci il testo: ")

l = testo.split()


for parola in l:
    print(parola.capitalize(), end="")
    print(" ", end="")