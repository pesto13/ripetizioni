import random
import math
def genera_lista_random(lunghezza=3,min=0,max=100):
    lista=[]
    for i in range(lunghezza):
        numero_casuale= random.randint(min,max)
        lista.append(numero_casuale)
    """
    genera una lista di un tot di elementi (lunghezza) compresi tra due valori
    (minimo e massimo) della lista
    """
    return lista

def genera_lista_random2(lunghezza=3,min=0,max=100):
    return[random.randint(min,max) for _ in range(lunghezza)]

def genera_lista_carMinusc(lunghezza=3):
    min=97
    max=122
    return[random.randint(min,max) for _ in range(lunghezza)]
        
def genera_lista_carMinusc(lunghezza=3):
    min=65
    max=90
    return[random.randint(min,max) for _ in range(lunghezza)]

def ipotenusa(cateto1=200, cateto2=100):
    somma = cateto1*2 + cateto2*2
    ipo = math.sqrt(somma)
    ipo = round(ipo, 2)
    return ipo
    """
    calcola la radice quadrata della somma x calcolare l'ipotenusa
    """

def applicasconto(prezzo=70, sconto=20):
    return prezzo-(prezzo*sconto/100)
    """
    viene applicato uno sconto ad un prezzo
    """
    
def istogramma(n=10):
    if n > 0:
        print('*' * n)
    """
    tot istogrammi quanti n
    """

def scrivisufile(nomefile, lista, aggiungi= False):
    if aggiungi:
        file=open(nomefile, "a")
    else:
        file=open(nomefile, "w")
    for x in lista:
        file.write(x+"\n")
    file.close()

def leggidafile(nomefile):
    file= open(nomefile, "r")
    testo=file.read()
    righe=testo.splitlines()
    file.close()
    return righe

def svuotafile(nomefile):
    file=open(nomefile, "w")
    file.close()