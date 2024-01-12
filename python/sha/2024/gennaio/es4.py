testo = input("Inserisci il testo: ")

countlower = 0
countupper = 0
for lettera in testo:
    
    if(lettera.islower()):
        countlower += 1
    if(lettera.isupper()):
        countupper += 1

print(countupper, countlower)