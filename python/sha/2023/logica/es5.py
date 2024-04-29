
N = int(input("inserisci N: "))

somma = 0
sommanegativa = 0
for i in range(N):
    valore = int(input("Inserisci valore: "))

    if(valore>=0):
        somma = somma + valore
    else:
        sommanegativa = sommanegativa + valore


print(somma)
print(sommanegativa)