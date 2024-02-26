import random
import funz
print("In questo programma puoi estrarre i gruppi di lavoro.")
print("Scegli cosa fare:")
print("1 --> controlla gli studenti inseriti nella classe")
print("2 --> aggiungere studenti alla classe")
print("3 --> eliminare uno studente dalla classe")
print("4 --> estrarre i gruppi di lavoro per oggi")
scelta = input("Digita la tua scelta:")
file_classe ="file_classe"
if scelta == "1":
    studenti = funz.leggidafile(file_classe)
    print("Gli studenti inseriti nel file sono:")
    for x in studenti:
        print(x)
elif scelta == "2":
    studenti = []
    risp = "s"
    while risp != "n":
        studente = input("Inserire nuovo studente:")
        studenti.append(studente)
        risp = input("Hai altri studenti da aggiungere? s/n")
    funz.scriviSuFile(file_classe,studenti,True)
elif scelta == "3":
    studenti = funz.leggiDaFile(file_classe)
    print("Gli studenti inseriti nel file sono:")
    for x in studenti:
        print(x)
    risp = "s"
    while risp != "n":
        elimina = input("Come si chiama lo studente che vuoi eliminare?")
        studenti.remove(elimina)
        risp = input("Hai altri studenti da eliminare? s/n")
    funz.scriviSuFile(file_classe,studenti)
elif scelta == "4":
    # sono riportate due versioni di questo algoritmo, commentarne una a scelta altrimenti non funziona!!
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
    # versione alternativa per estrazione gruppi (estraendo casualmente posizioni)
    posizioni = funz.genera_lista_random(len(nomi),0,len(nomi)-1)
    quanti = len(nomi)
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