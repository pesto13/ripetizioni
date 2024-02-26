import scelta1
import funz
filename = "file_scuola"
studenti_scuola = []
prosegui = True
# corsi_scuola = funz.leggidafile('corso_info') todo sistema
studenti_scuola = funz.leggidafile(filename)


while(prosegui):
    
    print("0-->Termina il programma")
    print("1-->visualizza/aggiungi/elimina dalla scuola")
    
    scelta = int(input("Inserisci la tua scelta: "))
    
    if scelta == 0:
        prosegui = False
        
    if(scelta == 1):
        print("V-->visualizza")
        print("A-->aggiungi")
        print("E-->elimina")
        azione = input("Cosa vuoi fare: ")
        
        if(azione == "V"):
            scelta1.visualizza(studenti_scuola)
        elif(azione == "A"):
            scelta1.aggiungi(studenti_scuola)
        elif(azione == "E"):
            scelta1.elimina(studenti_scuola)
    
    if(scelta == 2):
        print("V-->visualizza")
        print("A-->aggiungi")
        print("E-->elimina")
        print("M-->modifica")
        azione = input("Cosa vuoi fare: ")
        
        