def visualizza(studenti):
    for s in studenti:
        print(s)
        
def aggiungi(studenti):
    nome = input("Inserisci nome e cognome staccati da uno spazio bianco")
    studenti.append(nome)

def elimina(studenti):
    nome = input("Inserisci nome e cognome staccati da uno spazio bianco")
    studenti.remove(nome)