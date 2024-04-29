

dizionario = {
    'shampoo': 2.5,
    'sapone': 3.0,
    'dentifricio': 1.5,
    'balsamo': 2.25,
    'carta igienica': 10.75,
    'saponetta': 4.3,
    'detergente': 2.75,
    'bagnoschiuma': 3.25,
    'deodorante': 2.1,
    'spazzolino': 1.75
}


def calcola_incremento(dizionario, aumento):
    for c in dizionario.keys():
        dizionario[c] = dizionario[c] * (1 + aumento/100)
        
        
        
incremento = int(input("Inserisci valore incremento"))
calcola_incremento(dizionario, incremento)

print(dizionario)
