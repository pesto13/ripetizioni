# codice con ciclo for


risultato = 0
risposta = ""

while risposta!="no":

    a = int(input("Inserisci a: "))
    b = int(input("Inserisci b: "))

    operazione = input("Inserisci operazione: ")

    
    if(operazione=="+"):
        risultato = a + b
    elif(operazione=="-"):
        risultato= a-b
    

    print(risultato)

    risposta = input("vuoi continuare? ")




