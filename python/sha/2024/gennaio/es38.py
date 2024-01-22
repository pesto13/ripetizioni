
# sono riportate due versioni di questo algoritmo, commentarne una
a scelta altrimenti non funziona!!
nomi = funz.leggiDaFile(file_classe)
# versione già vista in classe
if len(nomi)%2!=0:
num = random.randint(0,len(nomi)-1)
nome3 = nomi[num]
nomi.remove(nome3)
nome3 = "- " +nome3
else:
nome3=""
quanti = len(nomi)//2
for x in range(quanti):
num = random.randint(0,len(nomi)-1)
nome1 = nomi[num]
nomi.remove(nome1)
num = random.randint(0,len(nomi)-1)
nome2 = nomi[num]
nomi.remove(nome2)
print(nome1, "-", nome2, nome3)
nome3=""
# versione alternativa per estrazione gruppi (estraendo casualmente
posizioni)
posizioni = funz.genera_lista_random(len(nomi),0,len(nomi)-1)
quanti = len(nomi)
LEZIONE 4: Gestione file di testo
if quanti%2!=0:
num = posizioni[quanti-1]
nome3 = nomi[num]
quanti = quanti -1
nome3 = "- " +nome3
else:
nome3 = ""
for x in range(0,quanti,2):
print(nomi[posizioni[x]],"-",nomi[posizioni[x+1]], nome3)
nome3 = ""
else:
print("Scelta non prevista! Ricominciare!!")